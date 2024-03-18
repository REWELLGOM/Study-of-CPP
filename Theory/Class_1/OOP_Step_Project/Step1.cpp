#include <iostream>

using namespace std;

namespace makeBanking
{
    void Func();
}

namespace Deposite
{
    void Func();
}

namespace Withdrawal
{
    void Func();
}

namespace Account
{
    void Func();
}

void Account::Func()
{
    
}


void makeBanking::Func(void)
{
    string ID;
    string Name;
    string money;
    cout << "[계좌 계설]" << endl;
    cout << "계좌ID: ";
    cin >> ID;
    cout << "이 름: ";
    cin >> Name;
    cout << "입금액: ";
    cin >> money;
}

void Deposite::Func()
{
    string ID;
    string D_Amount;
    cout<<"계좌 ID: ";
    cin>>ID;
    cout<<endl<<"입금액: ";
    cin>>D_Amount;
    cout<<endl<<"입금 완료"<<endl;
}

void Withdrawal::Func()
{
    string ID;
    string W_Amount;
    cout<<"계좌 ID: ";
    cin>>ID;
    cout<<endl<<"출금액: ";
    cin>>W_Amount;
    cout<<endl<<"출금 완료"<<endl;
}

int main(void)
{
    int num = 0;
    while (num != 5)
    {
        cout << "----Menu----" << endl;
        cout << "1. 계좌 개설" << endl;
        cout << "2. 입 금" << endl;
        cout << "3. 출 금" << endl;
        cout << "4. 계좌정보 전체 출력" << endl;
        cout << "5. 프로그램 종료" << endl;
        cout << "선택: ";
        cin >> num;

        if (num == 1)
        {
            makeBanking::Func();
        }
        else if(num == 2)
        {
           Deposite::Func();
        }
        else if(num ==3)
        {
            Withdrawal::Func();
        }
        else if(num == 4)
        {

        }
        else{
            break;
        }
    }
}
