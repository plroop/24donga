#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int count = 0;
    for (char ch : str) {
        if (ch == '(') count++;
        else if (ch == ')') count--;

        // 닫는 괄호가 더 많으면 잘못된 경우
        if (count < 0) {
            cout << "NO\n";
            return 0;
        }
    }

    // 모든 괄호가 짝을 이루면 0이어야 함
    if (count == 0) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
