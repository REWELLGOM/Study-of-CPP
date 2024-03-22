#include <iostream>

using namespace std;

struct Person
{
    string name;
    int age;
};  //이거 까먹으면 안됌

int main()
{
    Person p1;
    p1.name = "John Doe";
    p1.age = 20;

    Person p2 = {"Jane", 30};

    cout << p1.name << endl;
    cout << p2.name << endl;

    return 0;
}


