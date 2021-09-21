#include <iostream>
using namespace std;

class Base1
{
    public:
    void Greeting()
    {
        cout << "Hey there I am Anubhav Singh " << endl;
    }

};

class Base2
{
    public:
    void Greeting()
    {
        cout << "Hello Sir! How are you? " << endl;
    }
};

class Derived : public Base1 , public Base2
{
    public:
    void Greeting()
    {
        Base1 :: Greeting();
    }
};

class B
{
    public:
    void Hello()
    {
        cout << "Hello World!" << endl;
    }

};

class D : public B
{
    public:
    void Hello()
    {
        cout << "Hello there!" << endl;
    }

};

int main()
{
    Base1 object1;
    Base2 object2;
    object1.Greeting();
    object2.Greeting();

    Derived object3;
    object3.Greeting();
    

   B O1;
   O1.Hello();

   D O2;
   O2.Hello();

    return 0;
}