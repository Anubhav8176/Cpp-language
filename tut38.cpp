#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base :: setdata()
{
    data1 = 11;
    data2 = 22;
}

int Base :: getdata1()
{
    return data1;
}

int  Base :: getdata2()
{
    return data2;
}


class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
};

void Derived :: process()
{
    data3 = data2 * getdata1();
}

void Derived :: display()
{
    cout << "Value of data1 is  " << getdata1() << endl;
    cout << "Value of data2 is  " << data2 << endl;
    cout << "Value of data3 is  " << data3 << endl;
}


int main()
{
    Derived der;
    der.setdata();
    der.process();//Values at this stage is=> data1=11 , data2=22 , data3=242.
    der.display();

    return 0;
}