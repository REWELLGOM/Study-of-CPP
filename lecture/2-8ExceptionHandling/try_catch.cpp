#include <iostream>
using namespace std;

int main()
{
    int number[3] = {1,3,5};
    int input = 0;

    cout <<"Enter integer number(1~3)"<<endl;
    cin >> input;

    if(input < 1 || input > 3)
    {
        cout << "Error!"<<endl;
        return 0;
    }
    
    try
    {
        if(input < 1 || input > 3)
        {
            throw input;         //throw는 일단 먼저 시도하겠다는 말
        }
        cout << number[input - 1]<<endl;
    } catch(int e)   //throw에서 날린걸 e라는걸로 잡음   input -> e
    {
        cout << "Invalid input: "<<e<<endl;
    }
    cout << "Done!"<<endl;
    return 0;
}