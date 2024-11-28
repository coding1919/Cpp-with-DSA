#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //         * 
    //       * *
    //     * * *
    //   * * * *
    // * * * * *
    return 0;
}

// row = 1
// row <= 5
// print space, 5 - row times
// print *, row times
// row = row + 1