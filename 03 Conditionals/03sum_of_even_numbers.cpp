#include <iostream>
using namespace std;

int main()
{
    int num;
    int evenSum = 0;
    cout << "Enter number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            evenSum = evenSum + i;
        }
    }
    cout << "Sum of even numbers from 1 to " << num << " is " << evenSum;
    return 0;
}
