#include <iostream>
using namespace std;

void RotateArray(int arr[], int size, int n)
{
    // 1
    n = size % n;

    // 2 create temp and shift into n places
    int temp[1000];
    int idx = 0;
    for (int i = size - n; i < size; i++)
    {
        temp[idx] = arr[i];
        idx++;
    }

    // 3 copy into main arr from main array
    for (int i = size - 1; i >= 0; i--)
    {
        if ((i - n) >= 0)
        {
            arr[i] = arr[i - n];
        }
    }

    // 4 merging 2 arrays i.e. temp array and main array

    // note: i<n if you dont do this so the temp array indirectly gets copied in to the main array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 5, 15};
    int size = 8;
    int n = 3;

    cout << "before \n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    RotateArray(arr, size, n);

    cout << "\n\nafter \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}