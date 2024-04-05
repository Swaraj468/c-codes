#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[]){
    cout<<"In Function "<<sizeof(arr)<<endl;

}


int main(){
    int arr[]={1,2,3,4,5,6}; // Add a semicolon at the end of the line
    int n = sizeof(arr)/sizeof(int);

    cout<<"In Main "<<sizeof(arr)<<endl;
    printArray(arr);
    return 0;
}