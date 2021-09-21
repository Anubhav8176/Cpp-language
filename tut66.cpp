#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Anubhav
{
public:
    T1 data1;
    T2 data2;
    T3 data3;
    Anubhav(T1 x, T2 y, T3 z)
    {
        data1 = x;
        data2 = y;
        data3 = z;
    }
    void display()
    {
        cout << "The value of data1 is " << data1 << endl;
        cout << "The value of data2 is " << data2 << endl;
        cout << "The value of data3 is " << data3 << endl;
    }
};
int main()
{
    Anubhav<> A(54, 65.25, 'C');
    A.display();

    cout << endl;

    Anubhav<char, float, int > B('O', 234.545, 100);
    B.display();

    return 0;
}