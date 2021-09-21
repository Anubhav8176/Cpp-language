#include <iostream>
using namespace std;

/*Syntax for initialisation list:-
constructor name : initialisation list 
*/

class Name
{
    int a;
    int b;
    public:
    Name(int i , int j) : a(i) , b(j)
    {
        cout << "Constructor executed " << endl;
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
    }
};

int main()
{
    Name Anubhav(4, 6);

    return 0;
}