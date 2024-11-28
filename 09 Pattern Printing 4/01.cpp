#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //         *
    //       * * *
    //     * * * * *
    //   * * * * * * *
    // * * * * * * * * *
    return 0;
}

// row = 1
// row <= 5
// print space, (5 - row) times
// print *, (2 * row) - 1
// row = row + 1