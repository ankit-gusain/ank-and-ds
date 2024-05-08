#include <iostream>
using namespace std;

int main()
{
    //method 1  ---------------------------------------------- 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " * ";
        }
        cout<<endl;
    }

    // method 2---------------------------------------------
    //  for (int i = 0; i < 5; i++)
    //  {
    //      for (int j = 0; j < 5; j++)
    //      {
    //          if (i >= j)
    //          {
    //              cout << " * ";
    //          }
    //      }
    //      cout << endl;
    //  }
    return 0;
}