#include <iostream>
using namespace std;

class Bankdeposit
{
    int principle;
    int years;
    float intreastrate;
    float returnvalue;

public:
    Bankdeposit() {}
    Bankdeposit(int p, int y, float r);
    /*{
        principle = p;
        years = y;
        intreastrate = r;
        returnvalue = principle;
        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + intreastrate);
        }
    }*/
    Bankdeposit(int p, int y, int r);
    /*{
        principle = p;
        years = y;
        intreastrate = float(r) / 100;
        returnvalue = principle;
        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + intreastrate);
        }
    }*/
    void show();
};

Bankdeposit ::Bankdeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    intreastrate = r;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intreastrate);
    }
}

Bankdeposit ::Bankdeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    intreastrate = float(r) / 100;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + intreastrate);
    }
}

void Bankdeposit ::show()
{
    cout << "Principle amount was " << principle
         << ". Return value after " << years
         << " years is " << returnvalue << endl;
}

int main()
{
    Bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y and r " << endl;
    cin >> p;
    cout << endl;
    cin >> y;
    cout << endl;
    cin >> r;
    cout << endl;
    bd1 = Bankdeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y and R " << endl;
    cin >> p;
    cout << endl;
    cin >> y;
    cout << endl;
    cin >> R;
    cout << endl;
    bd2 = Bankdeposit(p, y, R);
    bd2.show();



    return 0;
}