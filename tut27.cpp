#include <iostream>
using namespace std;

class complex;

class calculater
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex, complex);
    int sumimaginarycomplex(complex, complex);
};

class complex
{
    int a, b;
    /*friend int calculater ::sumrealcomplex(complex, complex);
    friend int calculater ::sumimaginarycomplex(complex, complex);*/
    friend class calculater;
public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend complex sumnumber(complex o1, complex o2);

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculater ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculater ::sumimaginarycomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setnumber(1, 4);
    c1.printnumber();

    c2.setnumber(5, 7);
    c2.printnumber();

    calculater calc;
    int res = calc.sumrealcomplex(c1, c2);
    cout << "The sum of real part of the complexes given is " << res << endl;

    int resc = calc.sumimaginarycomplex(c1, c2);
    cout << "The sum of imaginary part of the complexes given is " << resc << endl;

    return 0;
}