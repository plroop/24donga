#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int a, n;

	// 입력
	cin >> a >> n;
    
    // 출력
	for(int i = 1; i <= n; i++) {
		a += n;
        cout << a << endl;
    }

    return 0;
}
