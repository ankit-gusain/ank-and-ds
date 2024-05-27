#include <iostream>
using namespace std;

int singleNumber(int nums[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ nums[i];
    }
    return ans;
}
 

int main()
{
    int n;
    cout << "\n enter the size ";
    cin >> n;

    int nums[n] = {};
    cout << "\n enter the array values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "\n array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    int solution = singleNumber(nums, n);

    cout << "\n single number: " << solution;
    return 0;
}
