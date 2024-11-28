#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i <= (n - 1); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime\n";
    }
    else
    {
        cout << "Not Prime\n";
    }

    // optimised way - in non prime number factors get repeated for 4 = 1*4, 2*2, 4*1 so till 2*2 is unique factors so root of 4 that is 2 so 1 and 2

    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime\n";
    }
    else
    {
        cout << "Not Prime\n";
    }
    return 0;
}
