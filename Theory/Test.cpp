#include <iostream>
using namespace std;

class fruitSeller
{
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    bool InitMembers(int price, int num, int money)
    {
        if(num < 0)
        {
            cout<<"wrong num"<<endl;
            return false;
        }
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
        return true;
    }    

    int SaleApples(int money)
    {
        int num = money/APPLE_PRICE;
        numOfApples -= num;
        myMoney += money;
        return num;
    }

    void ShowSalesResult()
    {
        cout<<"남은 사과: "<<numOfApples<<endl;
        cout<<"소지금: "<<myMoney<<endl<<endl;
    }
};

class fruitBuyer
{
private:    
    int myMoney;
    int numOfApples;

public:
    void InitMembers(int money, int num)
    {
        myMoney = money;
        numOfApples = num;
    }

    int BuyApples(fruitSeller &seller, int money)
    {
        numOfApples += seller.SaleApples(money);
        myMoney -= money;
    }

    void ShowBuyResult()
    {
        cout<<"구매 사과 수량: "<<numOfApples<<endl;
        cout<<"남은 소지금: "<<myMoney<<endl<<endl;
    }
};


int main()
{
    fruitSeller seller;
    seller.InitMembers(3000, 10, 0);
    fruitBuyer buyer;
    buyer.InitMembers(50000,0);

    buyer.BuyApples(seller, 12000);

    cout<<"과일 판매자 현황"<<endl;
    seller.ShowSalesResult();
    cout<<"과일 구매자 현황"<<endl;
    buyer.ShowBuyResult();
    return 0;
}