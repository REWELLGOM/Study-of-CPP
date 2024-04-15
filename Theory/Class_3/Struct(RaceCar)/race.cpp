#include <iostream>
using namespace std;

#define ID_LEN      20
#define MAX_SPD     200
#define FUEL_STEP   2
#define ACC_STEP    10
#define BRK_STEP    10

struct Car
{
    char gamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;

};

void ShowCarState(const Car &car)
{
    cout<<"소유자 ID: "<<car.gamerID<<endl;
    cout<<"연료량: "<<car.fuelGauge<<"%"<<endl;
    cout<<"현재속도: "<<car.curSpeed<<"km/s"<<endl;
}

void Accel(Car &car)
{
    if(car.fuelGauge<=0)
    //연료 없으면 작동X
    {
        return;
    }
    else
    {
        car.fuelGauge -=FUEL_STEP;

    }

    if(car.curSpeed + ACC_STEP >= MAX_SPD)
    //최고속도 보다 더 밟을때
    {
        car.curSpeed=MAX_SPD;
        return ;
    }
    
    car.curSpeed += ACC_STEP;
    //악셀 밟을수록 속도 증가
}

void Break(Car &car)
{
    if(car.curSpeed<BRK_STEP)
    //더 늦출 속도가 없을때
    {
        car.curSpeed=0;
        return;
    }

    car.curSpeed -= BRK_STEP;
}

int main()
{
    Car run99 = {"run99", 100, 0};
    Accel(run99);
    Accel(run99);
    ShowCarState(run99);
    Break(run99);
    ShowCarState(run99);

    Car sped77 = {"sped77", 100, 0};
    Accel(sped77);
    Break(sped77);
    ShowCarState(sped77);
    return 0;
}
