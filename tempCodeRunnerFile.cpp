#include<bits/stdc++.h>
using namespace std;
class abc
{
    private:
    int h1;
    int h2;

    public:
    void setabc(int i, int j){
     h1 = i;
     h2 = j;
    }
    int geth1()
    {
        return h1;
    }
    int geth2()
    {
        return h2;
    }
    void dam(int k)
    {
        if(h1<h2)
        {
            h1=-10;
        }
        else if(h1>h2)
        {
            h2=-10;
        }
        else
        {
            return;
        }
    }
};

int main()
{
    abc obj;
    obj.setabc(10,20);
    obj.dam(5);
    cout<<obj.geth1()<<" "<<obj.geth2()<<endl;
    return 0;
}
