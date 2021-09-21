#include <iostream>
using namespace std;
// 'this' is an operator which points the object which calls the member functions.
class A
{
    int a;

public:
    A &setData(int a)
    // void setData(int a)
    {
        this->a = a;
        return *this;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(2).getData();
    // a.getData();

    return 0;
}