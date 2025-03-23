#include <iostream>
using namespace std;

int main() {
    int C;
    double M;
    double a;

    C=13; M=0.165;
    a=C*M;
    cout.precision(6);
    cout.setf(ios::fixed);
    cout<<C<<' '<<"*"<<' '<<M<<' '<<"="<<' '<<a;
    // Please write your code here.
    return 0;
}