// encapsulation.cpp
#include <iostream>

using namespace std;

class Person
{
private:
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

    string getName()
    {
        return m_name;
    }
};

int main()
{
    Person p1 = Person("Eric Clapton");
    p1.sayHello();
    cout << p1.getName() << endl;

    return 0;
}