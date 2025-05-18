#include <iostream>
#include <string>
using namespace std;

int N;
string command[10000];
int A[10000];

int queue[10000];  // 큐 배열
int frontIdx = 0, backIdx = 0; // 큐 포인터

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> A[i]; // push 명령일 경우 값도 입력
        }
    }

    for (int i = 0; i < N; i++) {
        if (command[i] == "push") {
            queue[backIdx++] = A[i];  // 큐에 값 삽입
        } 
        else if (command[i] == "pop") {
            if (frontIdx == backIdx) cout << -1 << "\n";
            else cout << queue[frontIdx++] << "\n";
        } 
        else if (command[i] == "size") {
            cout << backIdx - frontIdx << "\n";
        } 
        else if (command[i] == "empty") {
            cout << (frontIdx == backIdx ? 1 : 0) << "\n";
        } 
        else if (command[i] == "front") {
            if (frontIdx == backIdx) cout << -1 << "\n";
            else cout << queue[frontIdx] << "\n";
        }
    }

    return 0;
}
