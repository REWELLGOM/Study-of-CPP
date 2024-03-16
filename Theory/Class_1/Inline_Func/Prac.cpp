//메크로 함수라고 생각하면 좀 이해하기 쉬울거 같다

#include <iostream>

using namespace std;
inline int SQUARE(int x)
{
    return x*x;
}

int main(void)
{
    cout<<SQUARE(5)<<endl;
    cout<<SQUARE(12)<<endl;
    return 0;
}