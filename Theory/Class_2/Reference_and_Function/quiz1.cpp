/*
#include <iostream>

using namespace std;

void increaseFunc(int &a)
{
    a++;
    transFunc(a);  //값을 바꾸고온뒤에 그값을 반환시키지 않음
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


int transFunc(int a)
{
    return a * (-1);
}


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

