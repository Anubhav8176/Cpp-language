#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    // static int d=0;
    // d = d + 1;
    int c = a * b ;
    return c ;
}

float moneyrecieved(int currentmoney, float factor=1.04){
    return currentmoney * factor;
}

int main()
{
    /*int a, b;
    cout << "Enter the value of a : " << flush;
    cin >> a;

    cout << "Enter the value of b : " << flush;
    cin >> b;

    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;
    cout << "The product of a and b is : " << product(a, b)<<endl;*/

    int money = 100000;
    cout << "If you deposited " << money << " in your bank account, you will recive Rs." << moneyrecieved(money) << " after one year"<<endl;
    cout << "For VIPs: If you deposited " << money << " in your bank account, you will recive Rs." << moneyrecieved(money, 1.1) << " after one year"<<endl;

    return 0;
}