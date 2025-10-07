#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 计算两个字符串的编辑距离
int editDistance(const string& word1, const string& word2) {
    int m = word1.size();
    int n = word2.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (word1[i - 1] == word2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]});
        }
    }

    return dp[m][n];
}

int main() {
    freopen("05.in", "r", stdin);
    freopen("05.out", "w", stdout);
    string word_to_check;
    cin >> word_to_check; // 要检查的单词

    int N;
    cin >> N; // 词表中单词数目

    vector<string> word_list(N);
    for (int i = 0; i < N; ++i) {
        cin >> word_list[i]; // 词表中的每一个单词
    }

    // 检查是否在词表中
    bool found = false;
    for (const auto& word : word_list) {
        if (word == word_to_check) {
            found = true;
            cout << word_to_check << endl;
            break;
        }
    }

    if (!found) {
        // 查找相似单词
        string similar_word = "";
        int min_distance = INT_MAX;
        for (const auto& word : word_list) {
            int distance = editDistance(word, word_to_check);
            if (distance < min_distance) {
                min_distance = distance;
                similar_word = word;
            }
        }
        if (min_distance <= 1) {
            cout << similar_word << endl;
        }
    }

    return 0;
}
