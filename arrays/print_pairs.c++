#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};

    cout << "all pairs are: \n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "( " << arr[i] << "," << arr[j] << " )";
        }
        cout << endl;
    }
}