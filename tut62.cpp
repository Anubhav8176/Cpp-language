#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample60b.txt");
    out << "My name is Anubhav Singh. " << endl;
    out << "My sister's name is Sakshi Singh. " << endl;
    out << "My father'sname is Mr. Sarvesh Bahadur Singh. " << endl;
    out << "My mother's name is Prabha Singh. " << endl;
    out.close();

    ifstream in;
    string s;
    in.open("sample60b.txt");
    while (in.eof()==0)
    {
        getline(in, s);
        cout << s <<endl;
    }
    in.close();

    return 0;
}