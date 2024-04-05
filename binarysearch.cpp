#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int key){
    int lb=0;
    int ub=n-1;
    while(lb<=ub){
        int mid=lb+(ub-lb)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
             ub=mid-1;
        }else{
             lb=mid+1;
        }
    }
}

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;

    int index = binary_search(arr, n, key);
        if(index!=-1){ 
            cout<<key<<" item found at "<<index<<endl;
        }
        else{
            cout<<" item not found "<<endl;
        }
    }
