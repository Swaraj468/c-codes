#include <bits/stdc++.h>
using namespace std;

bool is_array_sorted(int arr[], int n) {
    for(int i=0; i<n; i++){
        if(arr[i+1]>i)
        return false;
    }
    return true;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    
      cout << " is_array_sorted(arr, n)" <<endl;
    
      

    return 0;
}

