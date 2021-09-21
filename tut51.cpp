#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void set_data(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void get_data()
    {
        cout << "The real value is " << real << endl;
        cout << "The imaginary value is " << imaginary << endl;
        cout << "The complex number is " << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    // Complex c1;
    // Complex *p = &c1;
    Complex *p = new Complex;

    // c1.set_data(2, 3);
    //(*p).set_data(2, 3);
    p->set_data(2, 3);

    // c1.get_data();
    // (*p).get_data();
    p->get_data();

    Complex *p1 = new Complex[4];
    p1->set_data(2, 3);
    p1->get_data();

    return 0;
}