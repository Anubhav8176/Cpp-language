#include <iostream>
using namespace std;

class Shop
{
    int Id;
    int Price;
    public:
    void setData(int a , int b)
    {
        Id = a;
        Price = b;
    }

    void getData()
    {
        cout << "The Id of the product is " << Id << endl; 
        cout << "The Price of the product is " << Price << endl; 
    }
};

int main()
{
    Shop *ptr = new Shop[3];
    Shop *ptrtemp = ptr;
    int p, i;
    float q;

    for (i = 0; i < 3; i++)
    {
        cout << "Enter the Id of the product " << i+1 << endl;
        cin >> p;
        cout << "Enter the Price of the product " << i+1 << endl;
        cin >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < 3; i++)
    {
        cout << "Product Id " << i+1 << endl;
        ptrtemp->getData();
        ptrtemp++;
    }
  
    return 0;
}