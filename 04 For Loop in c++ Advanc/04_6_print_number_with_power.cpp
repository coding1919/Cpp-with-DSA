#include <iostream>
using namespace std;

int main()
{
    int n, pow;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "Enter the power: " << endl;
    cin >> pow;
    int num = n;
    for (int i = 1; i < pow; i++)
    {
        num = num * n;
    }
    cout << num;
    return 0;
}

// let's suppose number is 5 and power is 4
// we have to loop on the basis of power
// initially we will intialize a new variable with our number 5
// then we will loop from 1 to 3
// why 4 is not included because we have to multiply into number 5 3 times with the same number 5
// 5         *5*5*5
// number    times

// we want result 625 for 5 to the power 4:
// num = 5
// in loop at i = 1
// num = 5 * 5
// num = 25
// in loop at i = 2
// num = 25 * 5
// num = 125
// in loop at i = 3
// num = 125 * 5
// num = 625

// so the result we have got within the 3 iteration itself not 4
// so condition can be 1 to less than n (pow)
// condition can be 1 to less than or equal to n-1 (pow-1)
// condition can be 0 to less than n-1 (pow-1)
// condition can be 0 to less than or equal to n-2 (pow-2)