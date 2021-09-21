#include <iostream>
using namespace std;

class complex 
{
    int a, b;
    public:
    
    complex(int, int );

    void printnumber()
    {
        cout << "The complex number you wanted is " << a <<" + " << b << "i" << endl;
    } 
};

complex :: complex(int x, int y)
{
    a = x;
    b = y;
}


int main()
{

    complex c(4, 6);
    c.printnumber();

    complex a = complex(5, 7);
    a.printnumber();

    return 0;
}