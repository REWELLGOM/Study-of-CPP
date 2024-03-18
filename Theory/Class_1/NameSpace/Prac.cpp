
#include <iostream>
/*
namespace BestComImpl
{
    void SimpleFunc(void)
    {
        std::cout << "BestCom이 정의한 함수" << std::endl;
    }
}

namespace ProgCoImpl
{
    void SimpleFunc(void)
    {
        std::cout << "ProgCom이 정의한 함수" << std::endl;
    }
}
int main(void)
{
    BestComImpl::SimpleFunc();
    ProgCoImpl::SimpleFunc();
    return 0;
}
*/

/*
namespace BestComImpl
{
    void SimpleFunc(void);
}

namespace ProgComImpl
{
    void SimpleFunc(void);
}

int main(void)
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}

void BestComImpl::SimpleFunc(void)
{
    std::cout<<"BestCom이 정의한 함수"<<std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
    std::cout<<"ProgCom이 정의한 함수"<<std::endl;
}
*/

/*
namespace BestComImpl
{
    void SimpleFunc(void);
}

namespace BestComImpl
{
    void PrettyFunc(void);
}

namespace ProgComImpl
{
    void SimpleFunc(void);
}

int main(void)
{
    BestComImpl::SimpleFunc();
    return 0;
}

void BestComImpl::SimpleFunc(void)
{
    std::cout<<"BestCom이 정의한 함수"<<std::endl;
    PrettyFunc();
    ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc(void)
{
    std::cout<<"So Pretty!!"<<std::endl;
}

void ProgComImpl::SimpleFunc()
{
    std::cout<<"ProgCom이 정의한 함수"<<std::endl;
}
*/

/*
namespace Hybrid
{
    void HybFunc(void)
    {
        std::cout<<"So simple function!"<<std::endl;
        std::cout<<"In namespace Hybrid!"<<std::endl;
    }
}

int main(void)
{
    using Hybrid::HybFunc; //HybFunc를 이름공간 Hybrid에서 찾으라는 말임
    HybFunc();
    return 0;
}
*/

/*
//지정한것에서 한한 생략
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int num =20;
    cout<<"Hello World!"<<endl;
    cout<<"Hello"<<"World!"<<endl;
    cout<<num<<' '<<'A';
    cout<<' '<<3.14<<endl;
    return 0;
}
*/

/*
//std에 선언된 모든것에 대해 이름공간 지정의 생략
using namespace std;

int main(void)
{
    int num =20;
    cout<<"Hello World!"<<endl;
    cout<<"Hello"<<"World!"<<endl;
    cout<<num<<' '<<'A';
    cout<<' '<<3.14<<endl;
    return 0;
}
*/

/*
//별칭 지어주기
using namespace std;

namespace AAA
{
    namespace BBB
    {
        namespace CCC
        {
            int num1;
            int num2;
        }
    }
}

int main()
{
    AAA::BBB::CCC::num1 = 20;
    AAA::BBB::CCC::num2 = 30;

    namespace ABC = AAA::BBB::CCC; //ABC 하나로 만들어줌
    cout<<ABC::num1<<endl;
    cout<<ABC::num2<<endl;
    return 0;
}

*/

/*
int val = 100;
using namespace std;

int SimpleFunc(void)
{
    int val = 20;
    val+=3;  //지역 변수내의 val값을 3올림
    ::val+=7; //전역 변수의 val값을 7올림
    cout<<"심플펑 내에서의 값: "<<val<<endl;
    return val;
}
int main(void)
{
    SimpleFunc();
    cout<<"전역 변수 내에서의 값: "<<val<<endl;
    return 0;
}
*/