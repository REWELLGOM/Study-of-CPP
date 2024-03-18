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

