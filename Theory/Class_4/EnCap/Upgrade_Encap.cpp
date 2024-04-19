/*
    이전 코드에 비해서 간결해진것을 볼수있다.
    캡슐화는 데이터와 기능의 보호에 중점을 두고, 모듈화는 시스템의 구성 요소를 독립적으로 관리할 수 있게 하는 것에 초점
*/
#include <iostream>
using namespace std;

class SinivelCap
{
public:
    void Take() const 
    {
        cout<<"콧물이 남"<<endl;
    }
};

class SneezeCap
{
public:
    void Take() const
    {
        cout<<"재채기 멈춤"<<endl;
    }
};

class SnuffleCap
{
public:    
    void Take() const
    {
        cout<<"코가 뻥 뚫림"<<endl;
    }
};

class CAPSUL
{
private:
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap fcap;

public:
    void Take() const
    {
        scap.Take();
        zcap.Take();
        fcap.Take();
    }
};

class ColdPatient
{
public:
    void TakeCAPSUL(const CAPSUL &cap) const
    {
        cap.Take();
    }
};

int main(void)
{
    ColdPatient patient;
    CAPSUL cap;
    patient.TakeCAPSUL(cap);
    return 0;
}