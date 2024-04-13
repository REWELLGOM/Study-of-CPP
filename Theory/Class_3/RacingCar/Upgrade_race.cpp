#include <iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
    char gamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;

    void ShowCarState()
    {
        cout << "소유자 ID: " << gamerID << endl;
        cout << "연료량: " << fuelGauge << "%" << endl;
        cout << "현재속도: " << curSpeed << "km/s" << endl;
    }

    void Accel()
    {
        if (fuelGauge <= 0)
        // 연료 없으면 작동X
        {
            return;
        }
        else
        {
            fuelGauge -= FUEL_STEP;
        }

        if (curSpeed + ACC_STEP >= MAX_SPD)
        // 최고속도 보다 더 밟을때
        {
            curSpeed = MAX_SPD;
            return;
        }

        curSpeed += ACC_STEP;
        // 악셀 밟을수록 속도 증가
    }

    void Break()
    {
        if (curSpeed < BRK_STEP)
        // 더 늦출 속도가 없을때
        {
            curSpeed = 0;
            return;
        }

        curSpeed -= BRK_STEP;
    }
};

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
