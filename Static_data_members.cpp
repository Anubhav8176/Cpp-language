#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter your employee id : " << flush;
        cin >> id;
    }
    void getdata(void)
    {
        cout << "The id of employee is " << id << " and this is employee number " << count + 1 << endl;
        count ++;
    }

    static void countvalue(){
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count = 100;

int main()
{
    Employee Anubhav, Sakshi, Prabha;
    Anubhav.setdata();
    Anubhav.getdata();
    Employee :: countvalue();

    Sakshi.setdata();
    Sakshi.getdata();
    Employee :: countvalue();

    Prabha.setdata();
    Prabha.getdata();
    Employee :: countvalue();

    return 0;
}