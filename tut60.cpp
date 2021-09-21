#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string st = "My name is Anubhav Singh and I love my family.";
    ofstream out("sample60.txt");
    out << st;

    string st2;
    ifstream in("sample60b.txt");
    //in >> st2;// st2 mie saare text bula rhe hai hum file se. lekin keval 1st word hi print hoga.
    getline(in, st2); //isse poori line print ho jaayegi.
    cout << st2;

    return 0;
}