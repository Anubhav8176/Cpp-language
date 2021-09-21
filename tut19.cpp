#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << "The sum of 7 and 9 is " << sum(7,9) << endl;;
    cout << "The sum of 3, 7 and 9 is " << sum(3,7,9);

    return 0;
}