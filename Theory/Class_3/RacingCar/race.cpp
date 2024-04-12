#include <iostream>
using namespace std;

#define ID_LEN      20
#define MAX_SRP     200
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
    cout<<"연료량: "<<car.fuelGauge<<endl;
    cout<<"현재속도: "<<car.curSpeed<<endl;
}

void Accel(Car &car)
{
    if(car.fuelGauge<=0)
    {
        return;
    }
    else
    {
        car.fuelGauge -=FUEL_STEP;

    }

    if(car.curSpeed+)
    {

    }
    return
}