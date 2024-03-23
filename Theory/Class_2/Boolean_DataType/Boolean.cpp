#include <iostream>

// 0이 아닌 모든 정수는 '참'이다
using namespace std;

/*
int main(void)
{
    int num = 10;
    int i = 0;

    cout<<"true: "<<true<<endl;
    cout<<"false: "<<false<<endl;

    while(true)
    {
        cout<<i++<<' ';
        if(i > num)

        break;
    }
    cout<<endl;;

    //상수 1과 0의 데이터 크기
    cout<<"sizeof 1: "<<sizeof(1)<<endl;
    cout<<"sizeof 0: "<<sizeof(0)<<endl;

    //true flase의 데이터 크기
    cout<<"sizeof true: "<<sizeof(true)<<endl;
    cout<<"sizeof false: "<<sizeof(false)<<endl;
    return 0;

}
*/

bool IsPositive(int num)
{
    if (num <= 0)
        return false;
    else
        return true;
}

int main(void)
{
    bool isPos;
    int num;
    cout << "Input number: ";
    cin >> num;

    isPos = IsPositive(num);
    if (isPos)
        cout << "Positive number" << endl;
    else
        cout << "Negative number" << endl;

    return 0;
}
