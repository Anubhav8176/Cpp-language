#include <iostream>
using namespace std;

int main()
{
    int marks[10] = {98, 35, 89, 76, 45, 96, 49, 92, 99, 100};

    /* cout << "The Marks obtained by all the students are given as follows:" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    cout << marks[5] << endl;
    cout << marks[6] << endl;
    cout << marks[7] << endl;
    cout << marks[8] << endl;
    cout << marks[9] << endl;*/
    
    int* p=marks;
   
    cout << "The value of marks[0] is "<<*p<<endl;
    cout << "The value of marks[1] is "<<*(p+1)<<endl;
    cout << "The value of marks[2] is "<<*(p+2)<<endl;
    cout << "The value of marks[3] is "<<*(p+3)<<endl;
    cout << "The value of marks[4] is "<<*(p+4)<<endl;


    

    /*for (int i = 0; i < 10; i++)
    {
        cout<<"The value of marks obtained by "<<i<<" is "<<marks[i]<<endl;
    }

    int i=0;
    
    do{
        cout<< "The marks obtained by "<<i<<" is "<<marks[i]<<endl;
        i++;
    }while(i<10);

    while(i<10){
        cout<<"The marks obtained by the "<<i<<" is "<<marks[i]<<endl;
        i++;
    }*/

    

    return 0;
}