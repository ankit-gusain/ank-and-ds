#include <iostream>
using namespace std;

pair<int, int> TwoSum(int arr[], int size, int target)
{
    pair<int, int> ans = make_pair(-1, -1);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
            }
        }
    }
    return ans;
}

void Elements(int arr[], int size)
{
    cout << "enter the array elements ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void Display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int target;
    int size;
    cout << "enter the size of array ";
    cin >> size;
    int arr[size] = {};

    Elements(arr, size);
    cout << "enter the target ";
    cin >> target;

    Display(arr, size);
    cout << "\n" << target;

    pair<int, int> ans = TwoSum(arr, size, target);
    cout << "\n";

    if (ans.first == ans.second == -1)
    {
        cout << "no pair found";
    }
    else
    {
        cout << "(" << ans.first << "," << ans.second << ")";
    }

    return 0;
}
