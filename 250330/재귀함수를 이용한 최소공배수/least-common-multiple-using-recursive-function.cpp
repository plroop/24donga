#include <iostream>

using namespace std;

int n;
int arr[10];


int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


int findLCM(int arr[], int idx) {
    if (idx == 0) return arr[0]; 
    return lcm(arr[idx], findLCM(arr, idx - 1)); 
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    cout << findLCM(arr, n - 1) << endl;

    return 0;
}
