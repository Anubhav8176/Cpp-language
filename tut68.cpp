#include <iostream>
using namespace std;

template <class T>
class Class
{
public:
    int data1;
    Class(T a)
    {
        data1 = a;
    }
    void display();
};

template <class T>
void Class<T>::display()
{
    cout << "The value of data1 is " << data1 << endl;
}

void Function(int x)
{
    cout << "The value of x is " << x << endl;
}

template <class T>
void Function(T x)
{
    cout << "The value of x by templaised function is " << x << endl;
}

template <class T>
void Function1(T x)
{
    cout << "The value of x by templaised function1 is " << x << endl;
}

int main()
{
    // Class <int> cs(4);
    // cs.display();

    // Function(9.4);
    Function1('c');

    return 0;
}