#include <iostream>
using namespace std;

bool Prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int Fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;
    cout << Prime(a) << endl;
    cout << Fact(a) << endl;
    cout << Prime(b) << endl;
    cout << Fact(b) << endl;
    cout << Prime(b-a) << endl;
    cout << Fact(b-a) << endl;
    return 0;
}

// Enter two number: 7
// 14
// 1
// 5040
// 0
// 1278945280
// 1
// 5040