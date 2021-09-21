#include <iostream>
using namespace std;

class Baseclass
{
public:
    int var_base;
    void display()
    {
        cout << "The value of the var_base is " << var_base << endl;
    }
};

class Derivedclass : public Baseclass
{
public:
    int var_derived;
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

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 34;
    base_class_pointer->display();

    Derivedclass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 94;
    derived_class_pointer->var_derived = 9;
    derived_class_pointer->display();

    return 0;
}