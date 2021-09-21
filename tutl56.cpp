#include <iostream>
using namespace std;

class Baseclass
{
public:
    int var_base = 45;
    virtual void display()
    {
        cout << "The value of the var_base is " << var_base << endl;
    }
};

class Derivedclass : public Baseclass
{
public:
    int var_derived = 21;
    void display()
    {
        cout << "The value of the var_base is " << var_base << endl;
        cout << "The value of the var_dereived is " << var_derived << endl;
    }
};

int main()
{
    Baseclass *base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;

    base_class_pointer = &obj_derived;

    base_class_pointer->display();

    return 0;
}