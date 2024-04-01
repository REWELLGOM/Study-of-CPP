#include <iostream>

using namespace std;

int& RefReturnFunc(int &ref)
{
    ref++;
    return ref;
}

int main(void)
{
    int num1 = 1;
    int num2 = RefReturnFunc(num1);
    //그냥 선언한 num2는 값을 받기만 해버린 다른 변수임

    num1 += 1;
    num2 += 100;
    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;
}