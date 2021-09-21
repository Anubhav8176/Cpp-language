#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int m)
    {
        data1 = m;
        cout << "The construction Base1 is called." << endl;
    }

    void printdata1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int n)
    {
        data2 = n;
        cout << "The construction Base2 is called " << endl;
    }

    void printdata2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived constructor is called " << endl;
    }

    void printderived()
    {
        cout << "The value of derived1 is--> " << derived1 << endl;
        cout << "The value of derived2 is--> " << derived2 << endl;
        
    }
};

int main()
{
    Derived Anubhav(12 , 4 , 5 , 7);
    Anubhav.printdata1();
    // Anubhav.printdata2();
    // Anubhav.printderived();

    return 0;
};