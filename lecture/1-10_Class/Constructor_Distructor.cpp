#include <iostream>

using namespace std;

class Person
{
public:
    string m_name;

    Person(string name) // 생성자
    {
        cout << "Constructing Person......" << endl;
        m_name = name;
    }
    void sayHello()
    {
        cout << "Hello I'm " << m_name << endl;
    }
};

int main()
{
    string name;
    cin>>name;
    //Person *p1 = new Person("Eric Clapton");
    // Person p1 = Person("Eric Clapton");
    // Person p1("Eric Clapton");
    Person *p1 = name;
    

    p1->sayHello();

    return 0;
}