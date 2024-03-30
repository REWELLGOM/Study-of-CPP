#include <iostream>

using namespace std;

template <typename T>
T sum(T a, T b)
{
    return a + b;
}

template <> //template의 예외처리
char sum<char>(char a, char b)
{
    cout << "Unable to sum char!" << endl;
    return a;
}

int main()
{
    cout << sum<int>(1, 2) << endl;
    cout << sum<double>(2.0, 2.0) << endl;
    cout << sum<string>("Sparta", "CodingClub") << endl;

    char a = 'a';
    char b = 'b';
    cout << sum<char>(a, b) << endl;

    return 0;
}