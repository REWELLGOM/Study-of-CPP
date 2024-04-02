#include <iostream>
using namespace std;

namespace Swap
{
    void swapFunc(int *num1, int *num2)
    {
        int *num = num2;
        num2 = num1;
        num1 = num;
        cout<<*num1<<endl;
        cout<<*num2<<endl;
    }

    void swapFunc(char *ch1, char *ch2)
    {
        cout<<ch2<<endl;
        char ch = *ch1;
        *ch1 = *ch2;
        *ch2 = ch;
        cout<<ch1<<endl;
        cout<<ch2<<endl;
    }
}
int main(void)
{
    int num1 = 20, num2 = 30;
    Swap::swapFunc(&num1, &num2);
    

    char ch1 = 'a';
    char ch2 = 'b';
    cout<<ch1<<' '<<ch2<<endl;
    Swap::swapFunc(&ch1, &ch2);

}