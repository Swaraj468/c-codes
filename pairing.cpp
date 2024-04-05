#include<bits/stdc++.h>
using namespace std;
int pariring_array(int arr[], int n){

    for(int i=0; i<n; i++){
        int x=arr[i];

        for(int j=i+1; j<n; j++){
            int y=arr[j];
            cout<< x<<","<<y<<endl;
        }
        cout<<endl;
    }

}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n=sizeof(arr)/sizeof(int);

    pariring_array(arr, n);

    return 0;

}