#include <iostream>
using namespace std;

int main()
{
    // method 1  -------------------------------------------
    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            if (r == 0 || c == 0 || c == 5 - r - 1)
                cout << "* ";

            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}