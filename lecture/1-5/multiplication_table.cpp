#include <iostream>

int main(void)
{
    using namespace std;
    int num = 0;
    cout<<"몇 단: ";
    cin>>num;
    cout<<num<<"단 시작"<<endl;
    int result = 0;

    for(int i = 1; i<10;i++)
    {
        result = num * i;
        cout<<num<<" * "<<i<<" = "<<result<<endl;
    }
    return 0;

}