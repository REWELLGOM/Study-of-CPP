#include <iostream>

using namespace std;

class Person
{
public:             //기본은 private임    사용자가 입력해야 하는것을 설정할때는 public / private은 코드내에서만 
    string m_name;   
    void sayHello()  //메소드라고 부름
    {
        cout << "Hello" << endl;
    }
};

int main()
{
    Person p1;
    p1.m_name = "Eric Clapton";

    cout << p1.m_name << endl;
    p1.sayHello();

    return 0;
}