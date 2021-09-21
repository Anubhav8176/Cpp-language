#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 5, 48, 12, 54, 4, 35, 165};
    sort(arr, arr + 8, greater<int>());
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}