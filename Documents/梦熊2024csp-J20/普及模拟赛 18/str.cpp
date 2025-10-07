#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    freopen("str.in", "r", stdin);
    freopen("str.out", "w", stdout);

    string str1, str2;
    cin >> str1 >> str2;

    if (str1.length() != str2.length()) {//长度是否相同 
        cout << "1" << endl;
    } else {
        bool case_sensitive_equal = true;
        bool case_insensitive_equal = true;

        for (int i = 0; i < str1.length(); ++i) {
            if (str1[i] != str2[i]) {
                case_sensitive_equal = false;
                if (tolower(str1[i]) != tolower(str2[i])) {
                	//tolower(
                    case_insensitive_equal = false;
                    break;
                }
            }
        }

        if (case_sensitive_equal) {
            cout << "2" << endl;
        } else if (case_insensitive_equal) {
            cout << "3" << endl;
        } else {
            cout << "4" << endl;
        }
    }

    return 0;
}
