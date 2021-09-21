#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    // int *ptr = &a;

    cout << "The address of a is " << &a << endl;
    cout << "The value of a is " << *(&a) << endl;

    int *p = new int(77);
    cout << " the value at address p is " << *p << endl;

/*    int *b = new int[3];
    b[0] = 10;
    b[1] = 20;
    b[2] = 30;

    cout << "The value of b[0] is--> " << b[0] << endl;
    cout << "The value of b[1] is--> " << b[1] << endl;
    cout << "The value of b[2] is--> " << b[2] << endl;*/


int *b = new int[3];
    b[0] = 10;
    b[1] = 20;
    b[2] = 30;
    //delete[] b;
    cout << "The value of b[0] is--> " << b[0] << endl;
    cout << "The value of b[1] is--> " << b[1] << endl;
    cout << "The value of b[2] is--> " << b[2] << endl;


    return 0;
}