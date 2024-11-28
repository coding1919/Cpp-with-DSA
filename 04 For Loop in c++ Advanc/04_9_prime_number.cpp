#include <iostream>
using namespace std;

int main()
{
    int n;
    int prime = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 2)
    {
        cout << n << " is not a prime number" << endl;
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
        }
    }
    if (prime)
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }

    // another method
    if (n < 2)
    {
        cout << n << " is not a prime number" << endl;
        return 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << n << " is not a prime number" << endl;
                return 0;
            }
        }
        cout << n << " is a prime number" << endl;
        return 0;
    }
    return 0;
}
