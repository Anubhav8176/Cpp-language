#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1;
    list1.push_back(45);
    list1.push_back(66);
    list1.push_back(23);
    list1.push_back(78);
    display(list1);
    /*Removing of any elements from the list. 
    list1.pop_back();
    list1.pop_front();
    list1.remove(23);

    Sorting of the list.
    list1.sort();
    display(list1);*/

    list1.reverse();
    display(list1);

    list<int> list2(4);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 67;
    iter++;
    *iter = 27;
    iter++;
    *iter = 69;
    display(list2);
    list1.merge(list2);
    cout << "After merging: ";
    display(list1);

    // Sorting and merging of lists.
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout << "After sorting and merging: ";
    display(list1);

    return 0;
}