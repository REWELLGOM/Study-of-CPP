#include <iostream>
using namespace std;

class FruitSeller
{
private:
    const int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    FruitSeller(int price, int num, int money)
        :APPLE_PRICE(price), numOfApples(num), myMoney(money){}
    int SaleApples(int money)
    {
        int num = money/APPLE_PRICE;
        numOfApples -= num;
        myMoney += money;
        return num;
    }
    void ShowSalesResult() const
    {
        cout<<"남은 사과: "<<numOfApples<<endl;
        cout<<"소지금: "<<myMoney<<endl<<endl;
    }
};

class FruitBuyer
{
private:
    int myMoney;
    int numOfApples;

public:
    FruitBuyer(int money)
        :myMoney(money), numOfApples(0)
    {
    }
    void BuyApples(FruitSeller &seller, int money)
    {
        numOfApples += seller.SaleApples(money);
        myMoney -= money;
    }
    void ShowBuyResult() const
    {
        cout<<"구매 사과 수량: "<<numOfApples<<endl;
        cout<<"남은 소지금: "<<myMoney<<endl<<endl;
    }
};

int main()
{
    FruitSeller seller(1000, 20, 0);
    FruitBuyer buyer(10000);
    
    buyer.BuyApples(seller, 2000);

    cout<<"과일 판매자 현황"<<endl;
    seller.ShowSalesResult();
    cout<<"과일 구매자 현황"<<endl;
    buyer.ShowBuyResult();
    return 0;
}