#include <iostream>
using namespace std;

int main()
{
    // method 1  -------------------------------------------
    // for (int r = 0; r < 5; r++)
    // {
    //     for (int c = 0; c < 5; c++)
    //     {
    //         if(r>=c) {
    //             cout<<c+1 <<" ";

    //         }
    //     }
    //     cout << endl;
    // }

    // method 2-------------------------------
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}