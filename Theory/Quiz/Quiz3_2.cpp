/*
    머가 틀렸는지 다시 봐봐
*/

#include <iostream>
#include <cstring>
using namespace std;

class Printer
{
private:
    string Word;
public:
    string SetString(string Word);
    void ShowString();
};

string Printer::SetString(string Word)
{
    string newWard = Word;
    return newWard;
}

void Printer::ShowString()
{
    cout<<Word;
}

int main(void)
{
    cout<<"Start"<<endl;
    Printer printer;
    printer.SetString("Hello World!");
    printer.ShowString();
}