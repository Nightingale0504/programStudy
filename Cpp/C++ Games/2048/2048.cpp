#include <iostream>
#include <vector>
#include <fstream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

const int BOARD_SIZE = 4;  // 修改后的常量名
int score = 0;

class Game {
private:
    vector<vector<int>> board;
    bool moved;

    void addTile() {
        vector<pair<int, int>> emptyCells;
        for (int i = 0; i < BOARD_SIZE; i++)
            for (int j = 0; j < BOARD_SIZE; j++)
                if (board[i][j] == 0)
                    emptyCells.emplace_back(i, j);
        
        if (!emptyCells.empty()) {
            int index = rand() % emptyCells.size();
            int value = (rand() % 10 == 0) ? 4 : 2;
            board[emptyCells[index].first][emptyCells[index].second] = value;
        }
    }

    void moveVertically(int row, int col, int dir) {
        if (board[row][col] == 0) return;
        
        int nextRow = row;
        while (nextRow + dir >= 0 && nextRow + dir < BOARD_SIZE && 
               board[nextRow + dir][col] == 0) {
            nextRow += dir;
        }
        
        if (nextRow != row) {
            board[nextRow][col] = board[row][col];
            board[row][col] = 0;
            moved = true;
        }
    }

    void mergeVertical(int row, int col, int dir) {
        if (row + dir < 0 || row + dir >= BOARD_SIZE) return;
        if (board[row][col] != board[row + dir][col]) return;

        board[row][col] *= 2;
        score += board[row][col];
        board[row + dir][col] = 0;
        moved = true;
    }

    void moveHorizontally(int row, int col, int dir) {
        if (board[row][col] == 0) return;
        
        int nextCol = col;
        while (nextCol + dir >= 0 && nextCol + dir < BOARD_SIZE && 
               board[row][nextCol + dir] == 0) {
            nextCol += dir;
        }
        
        if (nextCol != col) {
            board[row][nextCol] = board[row][col];
            board[row][col] = 0;
            moved = true;
        }
    }

    void mergeHorizontal(int row, int col, int dir) {
        if (col + dir < 0 || col + dir >= BOARD_SIZE) return;
        if (board[row][col] != board[row][col + dir]) return;

        board[row][col] *= 2;
        score += board[row][col];
        board[row][col + dir] = 0;
        moved = true;
    }

public:
    Game() : board(BOARD_SIZE, vector<int>(BOARD_SIZE, 0)) {
        addTile();
        addTile();
    }

    void display() {
        system("cls");
        cout << "分数: " << score << "\n\n";
        for (auto &row : board) {
            for (int num : row) {
                if (num) printf("%4d", num);
                else printf("   .");
            }
            cout << "\n\n";
        }
    }

    bool move(int dir) {
        moved = false;
        // 方向对应: 0:上 1:右 2:下 3:左
        for (int i = 0; i < BOARD_SIZE; i++) {
            for (int j = 0; j < BOARD_SIZE; j++) {
                int row = (dir == 2) ? BOARD_SIZE-1 - j : j;
                int col = (dir == 3) ? BOARD_SIZE-1 - i : i;

                if (dir%2 == 0) moveVertically(row, col, (dir == 0) ? -1 : 1);
                else moveHorizontally(row, col, (dir == 1) ? 1 : -1);
            }
            
            for (int j = 0; j < BOARD_SIZE; j++) {
                int row = (dir == 2) ? BOARD_SIZE-1 - j : j;
                int col = (dir == 3) ? BOARD_SIZE-1 - i : i;

                if (dir%2 == 0) mergeVertical(row, col, (dir == 0) ? -1 : 1);
                else mergeHorizontal(row, col, (dir == 1) ? 1 : -1);
            }
        }
        if (moved) addTile();
        return moved;
    }

    bool isGameOver() {
        for (int i = 0; i < BOARD_SIZE; i++)
            for (int j = 0; j < BOARD_SIZE; j++)
                if (board[i][j] == 0) return false;

        for (int i = 0; i < BOARD_SIZE; i++)
            for (int j = 0; j < BOARD_SIZE; j++) {
                if (i < BOARD_SIZE-1 && board[i][j] == board[i+1][j]) return false;
                if (j < BOARD_SIZE-1 && board[i][j] == board[i][j+1]) return false;
            }
        return true;
    }

    void saveGame(const string& filename) {
        ofstream file((filename + ".sav").c_str()); // 兼容文件名处理
        file << score << "\n";
        for (auto &row : board)
            for (int num : row)
                file << num << " ";
        file.close();
        cout << "游戏已保存！按任意键继续...";
        _getch();
    }

    void loadGame(const string& filename) {
        ifstream file((filename + ".sav").c_str());
        if (!file) {
            cout << "存档不存在！按任意键继续...";
            _getch();
            return;
        }
        file >> score;
        for (auto &row : board)
            for (int &num : row)
                file >> num;
        file.close();
    }
};

int getDirection() {
    if (!_kbhit()) return -1;
    int ch = _getch();
    if (ch == 0 || ch == 0xE0) {  // 处理扩展键
        ch = _getch();
        switch(ch) {
            case 72: return 0; // 上
            case 77: return 1; // 右
            case 80: return 2; // 下
            case 75: return 3; // 左
        }
    }
    else if (ch == 's' || ch == 'S') return 4; // 保存游戏
    return -1;
}

void mainMenu() {
    system("cls");
    cout << "=== 2048游戏 ===\n";
    cout << "1. 新游戏\n";
    cout << "2. 加载存档\n";
    cout << "3. 退出\n";
    cout << "请选择: ";
}

int main() {
    srand(time(0));
    Game game;
    bool gameLoaded = false;

    while(true) {
        mainMenu();
        int choice;
        cin >> choice;
        cin.ignore();  // 清除输入缓冲区
        
        if (choice == 1) {
            game = Game();
            break;
        } else if (choice == 2) {
            string filename;
            cout << "输入存档文件名（无后缀）: ";
            getline(cin, filename);
            game.loadGame(filename);
            gameLoaded = true;
            break;
        } else if (choice == 3) {
            return 0;
        }
    }

    while(true) {
        game.display();
        if (game.isGameOver()) {
            cout << "\n游戏结束！最终得分: " << score << endl;
            break;
        }
        
        int dir = getDirection();
        if (dir == -1) continue;
        
        if (dir == 4) { // 保存游戏
            string filename;
            cout << "输入存档文件名（无后缀）: ";
            getline(cin, filename);
            game.saveGame(filename);
            continue;
        }
        
        if (dir >= 0 && dir <= 3) {
            game.move(dir);
        }
    }
    
    cout << "按任意键退出...";
    _getch();
    return 0;
}