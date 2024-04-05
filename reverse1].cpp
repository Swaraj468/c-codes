#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    
    for (int i = 0; i < n /2; i++) {
        
        int temp = arr[i];
        
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {
    int arr[] = {10, 20, 30, 45, 60, 80, 90, 100};
    int n = sizeof(arr) / sizeof(int);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
   
    reverseArray(arr, n);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
