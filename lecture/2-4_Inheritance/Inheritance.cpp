#include <iostream>

using namespace std;

class Person
{
private:
    string m_name;

public:
    Person(string name)  
    {
        cout << "Construting Person..." << endl;
        m_name = name;
    }
    ~Person()
    {
        cout << "Destructing Person..." << endl;
    }

    void sayHello()
    {
        cout << "Hello I'm " << m_name << endl;
    }
    string getName()
    {
        return m_name;
    }
};

class Musician : public Person   //사람이 기반이 된다는 뜻
{
private:
    string m_instrument;

public:
    Musician(string m_name) : Person(m_name)
    {
        cout << "Constructing Musician..." << endl;
    }
    ~Musician()
    {
        cout << "Destructing Musician..." << endl;
    }
    void setInstrument(string instrument)
    {
        m_instrument = instrument;
    }
    string getInstrument()
    {
        return m_instrument;
    }
};

int main()
{
    Musician m1 = Musician("Eric Clapton");
    m1.setInstrument("guitar");
    m1.sayHello();   //person의 상속자이기에 사용 가능
    cout << m1.getInstrument() << endl;

    return 0;
}