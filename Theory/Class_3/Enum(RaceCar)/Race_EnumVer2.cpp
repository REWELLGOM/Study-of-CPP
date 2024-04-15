#include <iostream>
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

struct Car
{
    char gamerID[Car_Var::ID_LEN];
    int fuelGauge;
    int curSpeed;

    void ShowCarState();
    void Accel();
    void Break();
};

void Car::ShowCarState()
{
    cout << "소유자 ID: " << gamerID << endl;
    cout << "연료량: " << fuelGauge << "%" << endl;
    cout << "현재속도: " << curSpeed << "km/s" << endl;
}

void Car::Accel()
{
    if (fuelGauge <= 0)
    // 연료 없으면 작동X
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
    Car run99 = {"run99", 100, 0};
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car sped77 = {"sped77", 100, 0};
    sped77.Accel();
    sped77.Break();
    sped77.ShowCarState();
    return 0;
}
