//부모 클래스에 이미 정의된 함수를 재정의해서 사용
#include <iostream>

using namespace std;

class Person
{
protected:
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
    Musician(string m_name) : Person(m_name) {}

    void sayHello()
    {
        cout << "Hi I'm " << m_name << endl;
        cout << "I play the " << m_instrument << endl;
    }

    void sayHello(string lang)
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