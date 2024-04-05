#include<bits/stdc++.h>
using namespace std;
int reverse_array(int arr[], int n){
    int lb=0;
    int ub=n-1;

    while(lb<ub){
        swap(arr[lb],arr[ub]);
        lb +=1;
        ub -=1;
    }



}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    reverse_array(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
