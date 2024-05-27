#include <iostream>
using namespace std;

int main()
{

    int arr[6] = {10, 20, 30, 40, 50, 70};

    int low = 0;
    int high = 5; // high = size-1

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout << " => ";
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
    
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}