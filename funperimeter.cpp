#include<bits/stdc++.h>
using namespace std;

double peri(int r)
{
    return 2*3.14*r;
}

double peri(int l, int b){
    return 2*(l+b);
}

double peri(int s1, int s2, int s3)
{
    return s1+s2+s3;
}

int main(){
    double circum = peri(10);
    cout<<circum<< endl;

double meter = peri(10, 20);
 
 cout<<meter<<endl;

    double per = peri(5,6,7);

    cout << per<< endl;
}
