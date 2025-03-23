#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;  // 사용자 입력 받기

    if (A >= B) {
        cout << 1 << endl;
    } else{
        cout << 0 << endl;
    }
    if (A > B) {
        cout << 1 << endl;
    } else{
        cout << 0 << endl;
    }
    if (A <= B) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    if (A < B) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    if (A == B) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    if (A != B) {
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}
