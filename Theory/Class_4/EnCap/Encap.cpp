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

class ColdPatient
{
public:
    void TakeSinvelCap(const  SinivelCap &cap) const
    {
        cap.Take();
    }
    void TakeSneezeCap(const SneezeCap &cap) const
    {
        cap.Take();
    }
    void TakeSnuffleCap(const SnuffleCap &cap) const
    {
        cap.Take();
    }
};

int main(void)
{
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;

    ColdPatient patient;
    patient.TakeSinvelCap(scap);
    patient.TakeSneezeCap(zcap);
    patient.TakeSnuffleCap(ncap);

    return 0;
}