#include <iostream>

using namespace std;

int n;
int arr[100];


int findMax(int arr[], int idx) {
    if (idx == 0) return arr[0]; 
    return max(arr[idx], findMax(arr, idx - 1)); 
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

  
    cout << findMax(arr, n - 1) << endl;

    return 0;
}
