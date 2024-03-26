/*
#include <iostream>

using namespace std;

void increaseFunc(int &a)
{
    a++;
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
*/

#include <iostream>

using namespace std;

// transFunc 함수를 먼저 정의
int transFunc(int a)
{
    return a * (-1);
}

// 이제 transFunc 함수 프로토타입 선언 없이도 increaseFunc 내에서 transFunc 호출 가능
void increaseFunc(int &a)
{
    a++;
    int result = transFunc(a);
    cout << "변환 후 값: " << result << endl;
}

int main(void)
{
    int num = 0;
    cout << "변환하고자하는 값: ";
    cin >> num;

    increaseFunc(num);
}