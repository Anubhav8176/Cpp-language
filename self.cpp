#include <iostream>
using namespace std;

template <class T1, class T2, class T3>
class self
{
    public:
        T1 maths;
        T2 physics;
        T3 chemistry;
        self(T1 a , T2 b, T3 c)
        {
            maths = a;
            physics = b;
            chemistry = c;
        }
        void display()
        {
            cout << "The marks you got in Mathematics is " << maths << endl;
            cout << "The marks you got in Physics is " << physics << endl;
            cout << "The marks you got in Chemistry is " << chemistry << endl;
        }
};

int main()
{
    cout << "Marks in natural number are " << endl;
    self<int, int, int> obj(89, 95, 96);
    obj.display();

    return 0;
}
