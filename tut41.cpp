
//MULTIPLE INHERITANCE

#include <iostream>
using namespace std;

/*SYNTAX FOR INHERITING IN MULTIPLE INHERITNCE 
class DerivedC : visibility-mode base1, visibility-mode base2
{
    class body 
};
*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};


class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};


class Derived : public Base1, public base2
{
public:
    void Show()
    {
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base2 is " << base2int << endl;
        cout << "The sum is " << (base1int + base2int) << endl;
    }
};

int main()
{
    Derived Anubhav;
    Anubhav.set_base1int(25);
    Anubhav.set_base2int(05);
    Anubhav.Show();

    return 0;
}