#include <iostream>
using namespace std;
/* overloading
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
        cout<<*ch2<<endl; //ch2만으로 출력하면 ch1의 값을 포함하여 연속된 메모리 영역을 출력
        char ch = *ch1;
        *ch1 = *ch2;
        *ch2 = ch;
    }
}
int main(void)
{
    int num1 = 20, num2 = 30;
    Swap::swapFunc(&num1, &num2);
    

    char ch1 = 'a';
    char ch2 = 'b';
    Swap::swapFunc(&ch1, &ch2);
    cout<<ch1<<' '<<ch2<<endl;
    return 0;
}
*/
int BoxVal(int length, int width, int height)
{
    cout<<"int로 왔다"<<endl;
    return length*width*height;
}

float BoxVal(float length, float width, float height)
{
    cout<<"float으로 왔다"<<endl;
    return length*width*height;
}

int BoxVal()
{
    cout<<"여기도 들어왔찌롱"<<endl;
    return 0;
}

int main()
{
    int a = 0, b = 0, c = 0;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<"result = "<<BoxVal(a,b,c)<<endl;
    return 0;
}
