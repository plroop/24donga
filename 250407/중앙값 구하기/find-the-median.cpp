#include <iostream>
using namespace std;

int main() {
    int a,b,c,winner,lost, last;
    cin >> a >> b >> c;
    winner = a>b ? a:b ;
    lost = a<b ? a:b;
    last = winner > c ? winner:c;
    if(last==c){
        cout << winner;

    }else if(last==winner){
          if(lost>c){
            cout << lost;
          }  else{
            cout << c;
          }
    }
    // Please write your code here.
    return 0;
}