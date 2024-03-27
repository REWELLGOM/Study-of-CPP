// encapsulation.cpp
#include <iostream>

using namespace std;

class Person
{
private:
    string m_name;

public:     //public안쓰면 기본적으로 private임
    Person(string name)
    {
        m_name = name;
    }

    void sayHello()
    {
        cout << "Hello I'm " << m_name << endl; 
    }

    string getName()
    {
        return m_name; //private에 접근하기위한 메소드 = 중개자 역할
    }
};

int main()  //main에서 m_name을 수정할 방법이 없음
{
    Person p1 = Person("Eric Clapton");
    p1.sayHello();
    cout << p1.getName() << endl;

    return 0;
}