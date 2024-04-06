#include <iostream>
using namespace std;




int main(void)
{
    const int num = 12;
    const int *num1 = &num;
    //const int num2 = *num1; 틀렸다

    //아래의 코드는 같지만 밑의 코드가 좀더 잘정리된거
    const int *(&num2) = num1;
    const int* &num2 = num1;

    cout<<"num: "<<*num1<<endl;
    cout<<"num2: "<<*num2<<endl;

}