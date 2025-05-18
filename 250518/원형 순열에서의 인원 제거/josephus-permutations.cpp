#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    queue<int> q;

    // 1부터 N까지 큐에 삽입
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    
    while (!q.empty()) {
        // K-1명은 맨 뒤로 보냄
        for (int i = 0; i < K - 1; i++) {
            q.push(q.front());
            q.pop();
        }

        // K번째 사람 제거
        cout << q.front();
        q.pop();
        if (!q.empty()) cout << " ";
       
    }
    

    return 0;
}

