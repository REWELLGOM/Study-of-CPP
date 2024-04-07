/*
메크로 함수라고 생각하면 좀 이해하기 쉬울거 같다
간단한 연산할때 이용
inline 함수는 성능 최적화 목적
실행 속도를 향상시킬 수 있지만, 남용하면 메모리 사용량을 증가
*/

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


/*
#include <string>
using namespace std;


string solution(int num) {
    num =3;
    string answer = "";
    if(num/2 == 0)
    {
        answer = "Even";
    }else
    {
        answer = "Odd";
    }
    return answer;
}
*/