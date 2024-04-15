/*
구조체와 다른점은 접근 제어이다.

pubilc 
어디서든 접근 허용

protected
상속관계에 놓여있을 때. 유도 클래스에서의 접근허용

private
클래스 안에 있는것들끼리만 접근허용
*/

#include <iostream>
#include <cstring>
using namespace std;

namespace Car_Var
{
    enum
    {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10,
    };
}

class Car
{
private:
    //멤버 변수
    char gamerID[Car_Var::ID_LEN];
    int fuelGauge;
    int curSpeed;
public:
    //멤버 함수
    void InitMembers(char *ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();
};

//초기화 용도
void Car::InitMembers(char *ID, int fuel)
{
    strcpy(gamerID, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}
void Car::ShowCarState()
{
    cout << "소유자 ID: " << gamerID << endl;
    cout << "연료량: " << fuelGauge << "%" << endl;
    cout << "현재속도: " << curSpeed << "km/s" << endl;
}

void Car::Accel()
{
    // 연료 없으면 작동X
    if (fuelGauge <= 0)
    {
        return;
    }
    else
    {
        fuelGauge -= Car_Var::FUEL_STEP;
    }

    if (curSpeed + Car_Var::ACC_STEP >= Car_Var::MAX_SPD)
    // 최고속도 보다 더 밟을때
    {
        curSpeed = Car_Var::MAX_SPD;
        return;
    }

    curSpeed += Car_Var::ACC_STEP;
    // 악셀 밟을수록 속도 증가
}

void Car::Break()
{
    if (curSpeed < Car_Var::BRK_STEP)
    // 더 늦출 속도가 없을때
    {
        curSpeed = 0;
        return;
    }

    curSpeed -= Car_Var::BRK_STEP;
}

int main()
{
    Car run99;
    run99.InitMembers("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    cout<<" "<<endl;
    run99.Break();
    run99.ShowCarState();
    cout<<" "<<endl;

    Car sped77;
    sped77.InitMembers("sped77", 100);
    sped77.Accel();
    sped77.Break();
    sped77.ShowCarState();
    return 0;
}
