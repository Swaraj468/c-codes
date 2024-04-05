#include<bits/stdc++.h>
using namespace std;

int main(){

     int arr[5];

    for (int i = 0; i<5; i++){
        cin>>arr[i];

    }
    int evenCount = 0, oddCount = 0;

     for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Number of even elements: " << evenCount << endl;
    cout << "Number of odd elements: " << oddCount << endl;

    return 0;
}

