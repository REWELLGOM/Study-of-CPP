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

    virtual void sayHello()  //이거없으면 person클래스의 sayhello만 가져옴 자식이 재정의 할수있게하는게 virtual
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
    p1->sayHello(); 
    // p1->playSomething();  //Person에서 만들었기때문에 불가 Musician으로 만들면 가능
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