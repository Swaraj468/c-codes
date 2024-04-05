/*Given a number N, you are required to write a program that prints the count of the digits in N.

Sample Input: 

6838

Sample Output:

4*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin>>N;
    int count=0;
     while(N!=0){
        N/=10;
        count++;
     }
     cout<<"The number is "<< count <<'\n';
}