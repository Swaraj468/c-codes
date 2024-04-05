#include<bits/stdc++.h>
using namespace std;

typedef struct employee{
    int eid;
    char favchar;
    float salary;
}ep;
union money{
    int rice;
    char car;
    float pounds;
};

int main(){
enum Meal{breakfast, lunch, dinner};
Meal m1 = breakfast;
cout<<(m1==1);
// cout<<breakfast;
// cout<<lunch;
// cout<<dinner;

// union money m1;
// m1.rice=34;
// m1.car='c';
// cout<<m1.rice;
// ep harry;
// ep swaraj;
// ep himanshu;

// swaraj.eid=1;
// swaraj.favchar='s';
// swaraj.salary=23900000000;
// cout<<"The value is "<<swaraj.eid<<'\n';
// cout<<"The value is "<<swaraj.salary<<'\n';
// cout<<"The value is "<<swaraj.favchar<<'\n';
}