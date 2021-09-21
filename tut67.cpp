#include <iostream>
using namespace std;

template<class T1, class T2>
float Average(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float x;
    x = Average(4, 5);
    cout << "The average is " << x << endl;

    float y;
    y = Average(5.25, 6.13);
    cout << "The average is " << y << endl;

    return 0;
}