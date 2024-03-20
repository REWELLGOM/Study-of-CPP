#include <iostream>

int main()
{
    using namespace std;

    int a = 10;
    int b = 2;

    cout<<"a+b = "<<a+b<<endl;
    cout<<"a-b = "<<a-b<<endl;
    cout<<"a*b = "<<a*b<<endl;
    cout<<"a/b = "<<a/b<<endl;
    cout<<"a%b = "<<a%b<<endl;

    int c,d,e;
    c = d = e = 10;
    e += d;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
    cout<<"e="<<e<<endl;

    return 0;
}