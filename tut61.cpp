#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream hout("sample60.txt");
    string st;
    cout << "Enter the data you wanted to enter in the external file: " << flush;
    cin >> st;
    hout << st;
    hout.close();

    ifstream hin("sample60.txt");
    string s;
    // hin >> s;
    getline(hin, s);
    cout << s;

    return 0;
}