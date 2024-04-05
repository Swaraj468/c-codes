/*#include<bits/stdc++.h>
using namespace std;
class abc{
    private:
    int a,b,c;
    int x,y,z;
    int m,n,o;
};
class xyz{
    void seta(int i);
    a = i;
}
int geta(){
    return a;
}
void setb(int );
    b = j;

int getb(){
    return b;
}
void setc(int k);
    c = k;

int getc(){
    return c;
};
class ttt{
void setx(int l);
    x =l;

int getx(){
    return x;
}
void sety(int q);
y = q;

int gety(){
    return y;
}

void setz(int r);
    z = r;

int getz(){
    return z;
}
};
class rrr{
void setm(int s);
    m = s;

int getm(){
    return m;
}
void setn(int t);
    n = t;
int getn(){
    return n;
}
void seto(int u);
    o = u;

int o(){
    return o;
}
};
int main(){
return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

class abc
{
private:
    int a, b, c;

public:
    void setabc(int i, int j, int k)
    {
        a = i;
        b = j;
        c = k;
    }

    int geta()
    {
        return a;
    }

    int getb()
    {
        return b;
    }

    int getc()
    {
        return c;
    }
};

class xyz : public abc
{
private:
    int x, y, z;

public:
    void setxyz(int i, int j, int k)
    {
        x = i;
        y = j;
        z = k;
    }

    int getx()
    {
        return x;
    }

    int gety()
    {
        return y;
    }

    int getz()
    {
        return z;
    }
};

class mno : private xyz
{
private:
    int m, n, o;

public:
    void setmno(int i, int j, int k)
    {
        m = i;
        n = j;
        o = k;
    }

    int getm()
    {
        return m;
    }

    int getn()
    {
        return n;
    }
    int geto()
    {
        return o;
    }
};

int main()
{
mno m1;

    m1.setmno(10, 20, 30);

    cout << m1.getm();
    cout << m1.getx();
    // cout << m1.geta();

    xyz x1;

    x1.setxyz(1, 2, 3);

    cout << x1.getx();
    // cout << x1.geta();

    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

class abc
{
private:
    int a, b, c;

public:
    void setabc(int i, int j, int k)
    {
        a = i;
        b = j;
        c = k;
    }

    int geta()
    {
        return a;
    }

    int getb()
    {
        return b;
    }

    int getc()
    {
        return c;
    }
    void greet(){
        cout<<"hi in abc/xyz";
    }
};

class xyz : private abc
{
private:
    int x, y, z;

public:
    void setxyz(int i, int j, int k)
    {
        x = i;
        y = j;
        z = k;
    }

    int getx()
    {
        return x;
    }

    int gety()
    {
        return y;
    }

    int getz()
    {
        return z;
    }void greet(){
        cout<<"hi in abc/xyz";
    }

};

class mno : public xyz, public abc
{
private:
    int m, n, o;

public:
    void setmno(int i, int j, int k)
    {
        m = i;
        n = j;
        o = k;
    }

    int getm()
    {
        return m;
    }

    int getn()
    {
        return n;
    }
    int geto()
    {
        return o;
    }
    
};

int main()
{
    //mno m1;
    abc m1;
   // m1.setmno(10, 20, 30);

    //cout << m1.getm();
    //cout << m1.getx();
    // cout << m1.geta();

    //xyz x1;

    //x1.setxyz(1, 2, 3);

    //cout << x1.getx();
    // cout << x1.geta();
   m1.abc::greet();
    return 0;
}