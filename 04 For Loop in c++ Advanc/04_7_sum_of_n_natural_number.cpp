#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of " << n << " natural number = " << sum << endl;
    cout << "Sum of " << n << " natural number = " << sum << endl;

    // another method (using formula)
    cout<<endl;
    int sumFormula = (n*(n+1))/2;
    cout << "Sum of " << n << " natural number = " << sumFormula << endl;
    return 0;
}
