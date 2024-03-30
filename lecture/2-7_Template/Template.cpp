//여러가지 자료형을 template하나로 해결하는 느낌
#include <iostream>

using namespace std;

// int sum(int a, int b)
// {
//     return a + b;
// }

// double sum(double a, double b)
// {
//     return a + b;
// }

template <typename T>  //예외처리가 필요함
T sum(T a, T b)
{
    return a + b;
}

int main()
{
    int s1 = sum(1, 2);
    double s2 = sum(2.2, 2.0);
    string s3 = sum<string>("Sparta", "CodingClub");
    double s4 = sum<double>(2.2, 2.0);
    char s5 = sum<char>('a','b');  //원하는 ab가 안나옴

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    return 0;
}