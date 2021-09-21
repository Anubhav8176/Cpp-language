#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemprice[100];
    int counter;

public:
    void incounter(void) { counter = 1; }
    void setprice(void);
    void displayprice(void);
};

void Shop ::setprice(void)
{
    cout << "Enter the Id of the item " << counter << endl;
    cin >> itemId[counter];
    cout << "Enter the price of the item:" << endl;
    cin >> itemprice[counter];
    counter++;
}

void Shop ::displayprice(void)
{
    for (int i = 1; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.incounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}