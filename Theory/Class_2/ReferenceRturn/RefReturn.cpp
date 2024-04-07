/*
새롭게 선언하는것이 아닌 기존의 것을 이용하는 것이기에 메모리 관리에 용이
최적화에도 용이함
유지보수와 확장성 용이
*/
#include <iostream>

using namespace std;

int& RefReturnFunc(int &ref) 
//num1의 값을 변형하기위해서 ref를 num1의 참조자로 만든거임 참조형이기에 반환도 참조형임
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