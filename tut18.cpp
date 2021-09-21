#include <iostream>
using namespace std;

int fib(int x)
{
    if (x < 2)
    {
        return 1;
    }
    return fib(x - 1) + fib(x - 2);
}

int factorial(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    /*int a;
    cout << "Enter a number = " << flush;
    cin >> a;
    cout << "The factorial of " << a << " is given by " << factorial(a) << endl;*/

    int x;
    cout << "Enter a number = " << flush;
    cin >> x;
    cout << "The value of number at position " << x << " is given by " << fib(x) << endl;

    return 0;
}