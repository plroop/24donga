#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string str;
    cin >> str;

    stack<char> s;

    for (char ch : str) {
        if (ch == '(') {
            s.push(ch); // 여는 괄호는 스택에 push
        } else if (ch == ')') {
            if (s.empty()) {
                // 닫는 괄호인데 스택이 비어있으면 잘못된 괄호열
                cout << "NO\n";
                return 0;
            }
            s.pop(); // 짝 맞는 여는 괄호 제거
        }
    }

    // 스택이 비어 있어야 모든 괄호가 짝 맞는 것
    if (s.empty()) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
