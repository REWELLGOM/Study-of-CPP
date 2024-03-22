#include <iostream>

using namespace std;

struct Person
{
    string name;
    int age;
};

int main()
{
    Person students[2] = {
        {"John Doe", 20},
        {"Jane", 23}
		};

    cout << students[0].name << endl;
    cout << students[1].name << endl;

    return 0;
}