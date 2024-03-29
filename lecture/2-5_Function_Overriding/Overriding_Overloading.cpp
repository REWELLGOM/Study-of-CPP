//부모 클래스에 이미 정의된 함수를 재정의해서 사용
#include <iostream>

using namespace std;

class Person
{
protected:   //접근제어자 상속에서 가져올수있음 클래스 상속단계에서만 사용가능
    string m_name;

public:
    Person(string name)
    {
        m_name = name;
    }

    void sayHello()
    {
        cout << "Hello I'm " << m_name << endl;
    }
};

class Musician : public Person
{
private:
    string m_instrument;

public:
    Musician(string m_name) : Person(m_name) {}  //Person클래스에서 가져와서 Musician에 넣음 preivate하면 이렇게 가져올수 없음 그래서 위에 protected사용

    void sayHello() //오버라이딩
    {
        cout << "Hi I'm " << m_name << endl;
        cout << "I play the " << m_instrument << endl;
    }

    void sayHello(string lang) //오버로딩
    {
        if (lang == "ENG")
        {
            cout << "Hello!" << endl;
        }
        else
        {
            cout << "I can only speak in English..." << endl;
        }
    }

    void setInstrument(string instrument)
    {
        m_instrument = instrument;
    }
};

int main()
{
    Musician m1 = Musician("Eric Clapton");
    m1.setInstrument("guitar");
    m1.sayHello();
    m1.sayHello("KOR");
    // cout << m1.m_name << endl;

    return 0;
}