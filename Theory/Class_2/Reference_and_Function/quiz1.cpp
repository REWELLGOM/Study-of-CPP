#include <iostream>

using namespace std;

void increaseFunc(int &num)
{
    num++;
    transFunc(num);
}

int transFunc(int a)
{
    int num1 = a*(-1);
    return num1;
}

int main(void)
{
    int num = 0;
    cout<<"변환하고자하는 값: ";
    cin>>num;

    increaseFunc(num);
}