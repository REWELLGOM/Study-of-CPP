#include <iostream>

using namespace std;

int& RefReturnFunc(int &ref)
{
    //num1의 값을 받고 이 안에서만 살아있는 ref
    ref++;
    return ref;
}

int main(void)
{
    int num1 = 1;
    int &num2 = RefReturnFunc(num1);
    //num1과 num2는 같은게 되어버림

    num1++;
    num2++;
    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;
    return 0;
}