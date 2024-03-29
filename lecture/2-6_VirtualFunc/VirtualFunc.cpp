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

    virtual void sayHello()  //이거없으면 person클래스의 sayhello만 가져옴
    {
        cout << "Hello I'm " << m_name << endl;
    }
};

class Musician : public Person
{
public:
    Musician(string m_name) : Person(m_name)
    {
    }
    void sayHello()
    {
        cout << "Hi I'm " << m_name << endl;
        cout << "I'm a musician!" << endl;
    }

    void playSomething()
    {
        cout << "lalala~" << endl;
    }
};

class Baker : public Person
{
public:
    Baker(string m_name) : Person(m_name)
    {
    }
    void sayHello()
    {
        cout << "Hi I'm " << m_name << endl;
        cout << "I like bread!" << endl;
    }
};

int main()
{
    Person *p1 = new Musician("Jeff");
    p1->sayHello();  //Person에 저장해놔서
    // p1->playSomething();  //Person에서 만들어서 접근
    cout << endl;

    Person *p2 = new Person("Jane");
    p2->sayHello();
    cout << endl;

    p1 = new Baker("Yumi");
    p1->sayHello();

    delete p1;
    delete p2;

    return 0;
}