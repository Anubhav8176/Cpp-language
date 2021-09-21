#include <iostream>
using namespace std;

class complex 
{
    int a, b;
    public:
    complex(void);

    void printnumber()
    {
        cout << "The complex is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)
{
    a = 1;
    b = 4;
}

int
main()
{
    complex c;
    c.printnumber();
    return 0;
}