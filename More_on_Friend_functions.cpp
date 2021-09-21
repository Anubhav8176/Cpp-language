#include <iostream>
using namespace std;

class Y;

class X
{
    int data;
    public:
    void setvalue(int value) 
    {
        data = value;
    }
    friend void add(X , Y);
};

class Y
{
    int num;
    public:
    void setvalue(int value) 
    {
        num = value;
    }
    friend void add(X , Y);
};

void add(X o1, Y o2)
{
    cout << "Suming the values of a and b is given by " << o1.data + o2.num << endl;
}

int main()
{
    X a1;
    a1.setvalue(3);

    Y a2;
    a2.setvalue(5);

    add(a1, a2);

    return 0;
}