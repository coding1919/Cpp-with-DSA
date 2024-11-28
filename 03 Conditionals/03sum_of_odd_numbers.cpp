#include <iostream>
using namespace std;

int main()
{
    int num;
    int oddSum = 0;
    cout << "Enter number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            oddSum = oddSum + i;
        }
    }
    cout << "Sum of odd number from 1 to " << num << " is " << oddSum << endl;

    // using while loop
    oddSum = 0;
    int i = 1;
    while (i <= num)
    {
        if (i % 2 != 0)
        {
            oddSum = oddSum + i;
        }
        i++;
    }
    cout << "Sum of odd number from 1 to " << num << " is " << oddSum << endl;

    return 0;
}
