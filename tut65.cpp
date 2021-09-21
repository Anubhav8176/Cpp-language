#include <iostream>
using namespace std;

template <class T1, class T2>
class myclass
{
public:
    T1 a;
    T2 b;
    myclass(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << endl
             << b << endl;
    }
};

int main()
{
    myclass <int, char> obj(1, 'C');
    obj.display();

    return 0;
}