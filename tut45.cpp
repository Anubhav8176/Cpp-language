#include <iostream>
using namespace std;

class Students
{
protected:
    int roll_number;

public:
    void set_number(int a)
    {
        roll_number = a;
    }

    void print_number()
    {
        cout << "The roll number is " << roll_number << endl;
    }
};

class Test : virtual public Students
{
protected:
    int maths;
    int physics;

public:
    void set_marks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks()
    {
        cout << "The marks in Mathematics is=> " << maths << endl;
        cout << "The marks i phyics is=> " << physics << endl;
    }
};

class Sports : virtual public Students
{
protected:
    float score;

public:
    void set_score(int sc)
    {
        score = sc;
    }

    void print_score()
    {
        cout << "The marks in physical education is=> " << score << endl;
    }
};

class Result : public Test, public Sports
{
protected:
    float total;

public:
    void display()
    {


        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "The total marks you got is=> " << total << endl;
    }
};

int main()
{
    Result Anubhav;
    Anubhav.set_number(2370010018);
    Anubhav.set_marks(89 , 95);
    Anubhav.set_score(98);
    Anubhav.display();


    return 0;
}