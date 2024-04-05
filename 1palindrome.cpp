#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int arr[], int n) {
  
  for (int i = 0; i < n / 2; i++) {
    
    if (arr[i] != arr[n - i - 1]) {
      
      return false;
    }
  }
  
  return true;
}
int main() {
    
    int arr[] = { 1, 2, 3, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    isPalindrome(arr, n);
    return 0;
}