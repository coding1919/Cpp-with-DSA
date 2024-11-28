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
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1
    return 0;
}

// row = 1
// row <= 5
// print space, (5 - row) times
// print 1 to row, increment
// print row - 1 to 1, decrement
// row = row + 1
