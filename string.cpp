#include <iostream>

using namespace std;

int main()
{
/*string firstname;
string lastname;
cin>>firstname;
cin>>lastname;
string fullname = firstname + lastname;
cout<< fullname;
return 0;*/
string fname, lname;
cin>>fname;
cin>>lname;

fname.append(" ");
fname.append(lname);
cout<<fname;
}