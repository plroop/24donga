#include <iostream>

using namespace std;

int main() {
    int N, M;

    cin >> N;
    cin >> M;
    cout << N << endl;
    while(N/M>0){
       
        cout << N/M << endl;
        N/=M;
        
    }
    // Please write your code here.
    
    return 0;
}
