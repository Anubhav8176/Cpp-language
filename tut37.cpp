#include <iostream>
using namespace std;

class Employee
{
public:
    int ID;
    float salary;
    Employee(int inpId)
    {
        ID = inpId;
        salary = 34.45;
    }
    Employee(){};
};

/*Derived class syntax:-
{{class derived-class-name}} : {{visibility-mode}}  {{bas-class-name}}
{
    class members / methods / etc........
    Note:-
    1. Default visibility mode is private.
    2. Private visibility mode: Public members of base class becomes private members of derived class.
    3. Public visibility mode: Public members of base class becomes public members of derived class.
    4. Privae members never be inherited.
}*/

class programmer : Employee
{
public:
    int languagecode;
    int ID;
    programmer(int inpId)
    {
        ID = inpId;
        languagecode = 9;
    }
    void getdata()
    {
        cout << ID << endl;
    }
};



int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    programmer skillF(10);
    cout << skillF.languagecode << endl;
    cout << skillF.ID << endl;
    skillF.getdata();

    return 0;
}
