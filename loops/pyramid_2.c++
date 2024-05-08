#include <iostream>
using namespace std;

int main()
{
    //method 1  -------------------------------------------
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 -(i + 1); j++)
        {
            cout << " * ";
        }
        cout<<endl;
    }
return 0;
}