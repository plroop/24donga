#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if((n%2==1 && n%3==0)){
        cout << "true";
    }else if ((n%2==0 && n%5==0)){
        cout << "true";
    }else{
        cout << "false";
    }
    // Please write your code here.
    return 0;
}