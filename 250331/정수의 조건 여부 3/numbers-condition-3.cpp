#include <iostream>
using namespace std;

int main() {
    int a;
    int b,c;
    cin >> a;
    b= a%13;
    c= a%19;
    
    if((b==0) or (c==0)){
        cout << "True";
    }else{
        cout << "False";
    }
        
        
        
        
        // Please write your code here.
    return 0;
}