#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << "  ";
        }
        for (int j = (2 * i) - 1; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout<<endl;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // * * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *
    //         *
    return 0;
}

// row = n
// row >= 1
// print space, ((2 * n) - 1) - (2 * row) / 2 times = n - row
// print *, (2 * row) - 1 times
// row = row - 1