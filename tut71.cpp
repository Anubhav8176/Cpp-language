#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << flush;
        // cout << v.at(i) << " " << flush;
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int element, size = 5;
    /*cout << "Enter the size of size vector: " << flush;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element to add this vector: " << flush;
        cin >> element;
        vec1.push_back(element);
    }
    vec1.pop_back();
    display(vec1);
    vector<int>::iterator a = vec1.begin();
    vec1.insert(a, 1, 55);
    display(vec1);*/

    /*vector<char> vec2(4); // A 4-element vector
    display(vec2);
    vector<char> vec3(vec2); // A 4-element vector from vec2.
    display(vec3);*/
    vector<int> vec4(6, 13);
    display(vec4);
    vector<int>::iterator b = vec4.begin();
    vec4.insert(b+4 , 75);
    display(vec4);

    return 0;
}