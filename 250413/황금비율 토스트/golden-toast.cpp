#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    string s;
    cin >> n >> m >> s;

    vector<char> v(s.begin(), s.end());
    int cursor = v.size();  // 커서는 문자열 맨 끝에서 시작

    for (int i = 0; i < m; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "L") {
            if (cursor > 0) cursor--;
        } else if (cmd == "R") {
            if (cursor < v.size()) cursor++;
        } else if (cmd == "D") {
            if (cursor < v.size()) {
                v.erase(v.begin() + cursor);
            }
        } else if (cmd == "P") {
            char c;
            cin >> c;
            v.insert(v.begin() + cursor, c);
            cursor++;
        }
    }

    for (char c : v) cout << c;
    cout << endl;
    return 0;
}
