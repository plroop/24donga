#include <iostream>
#include <stack>
using namespace std;

int N;
string command[10000];
int value[10000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
        }
    }

    stack<int> st;

    for (int i = 0; i < N; i++) {
        if (command[i] == "push") {
            st.push(value[i]);
        }
        else if (command[i] == "pop") {
            if (st.empty()) cout << -1 << '\n';
            else {
                cout << st.top() << '\n';
                st.pop();
            }
        }
        else if (command[i] == "size") {
            cout << st.size() << '\n';
        }
        else if (command[i] == "empty") {
            cout << (st.empty() ? 1 : 0) << '\n';
        }
        else if (command[i] == "top") {
            if (st.empty()) cout << -1 << '\n';
            else cout << st.top() << '\n';
        }
    }

    return 0;
}
