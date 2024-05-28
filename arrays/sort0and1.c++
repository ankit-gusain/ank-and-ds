#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (arr[s] == 0)
        {
            s++;
        }

        else if (arr[s] == 1)
        {
            swap(arr[s], arr[e]);
        }

        if (arr[e] == 1)
        {
            e--;
        }
    }
    cout << " => ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << " size :";
    cin >> n;

    int nums[n] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << " " << nums[i];
    }

    sortZeroOne(nums, n);

    return 0;
}