#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    cout << "The marks obtained by the candidates in physics are given as follows: " << endl;
    map<string, int> Marksmap;
    Marksmap["Anubhav "] = 95;
    Marksmap["Sakshi "] = 87;
    Marksmap["Ramanohar "] = 75;
    Marksmap["Hariya "] = 67;

    Marksmap.insert({{"Sarvesh", 65}, {"Prabha", 88}});
    map<string, int>::iterator itr;
    for (itr = Marksmap.begin();itr != Marksmap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }

    cout << "The size of map is " << Marksmap.size() << endl;
    cout << "The maximum size of map is " << Marksmap.max_size() << endl;

    return 0;
}