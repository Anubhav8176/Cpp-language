/*
create 2 Calculator:
    1. Simple calculator --> Takes input of 2 number using utillity function and performs +,-,*,/
    and displays the results using another function.
    2. Scientific calculator --> Takes input of 2 number using utillity function and performs 
    any your scientific operations of your choice and displays the results using another function.

    Create another class 'Hybridcalculator' and inherit it using these 2 classes:
    Q1. What type of inheritance are you using? --> Multiple Inheritance
    Q2. Which mode of inheritance are youu using? --> Both in public
    Q3. Create  an object of HybridCalculator and display results of simple and scientific 
    clculator.
    Q4. How is code reusability implemented.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Simplecalculator
{
    int a , b;
public:
    void Getnumber_simple()
    {
        cout << "Enter the value of a=> " << flush;
        cin >> a;
        cout << endl;

        cout << "Enter the value of b=> " << flush;
        cin >> b;
        cout << endl;
    }

    void Perform_operation_simple()
    {
        cout << "The value of a+b is=> " << (a + b) << endl;
        cout << "The value of a-b is=> " << (a - b) << endl;
        cout << "The value of a*b is=> " << (a * b) << endl;
        cout << "The value of a/b is=> " << (a / b) << endl;
    }
};

class Scientificcalculator
{
       int a , b;
public:
    void Getnumber_scientific()
    {
        cout << "Enter the value of a=> " << flush;
        cin >> a;
        cout << endl;

        cout << "Enter the value of b=> " << flush;
        cin >> b;
        cout << endl;
    }

    void Perform_operation_scientific()
    {
        cout << "The value of cos(a) is=> " << cos(a) << endl;
        cout << "The value of sin(a) is=> " << sin(a) << endl;
        cout << "The value of tan(a) is=> " << tan(a) << endl;
        cout << "The value of exp(a) is=> " << exp(a) << endl;
        
    }
};

class Hybridcalculator : public Simplecalculator , public Scientificcalculator
{

};

int main()
{
    // Scientificcalculator Anubhav;
    // Anubhav.Getnumber();
    // Anubhav.Perform_operation();

    Hybridcalculator Anubhav;
    Anubhav.Getnumber_simple();
    Anubhav.Perform_operation_simple();

    cout << endl;
    cout << endl; 

    Anubhav.Getnumber_scientific();
    Anubhav.Perform_operation_scientific();

    return 0;
}