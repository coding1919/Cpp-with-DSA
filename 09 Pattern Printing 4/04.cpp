#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    // my try
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4 - i + 1; j >= 1; j--)
        {
            cout << "* ";
        }

        for (int j = 1; j <= (2 * i) - 2; j++)
        {
            cout << "  ";
        }

        for (int j = 4 - i + 1; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        for (int j = 1; j <= (2*4)-(2*i); j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    // video approach
    // * print -> space -> * print
    // first we will print first 4 rows and then next 4 rows
    // space | row |  *
    //   0   |  4  | 4 , 4
    //   2   |  3  | 3 , 3
    //   4   |  2  | 2 , 2
    //   6   |  1  | 1 , 1
    // star and row has direct connection
    // space will (2*n) - (2*i) times
    // space | row |  *
    //   6   |  1  | 1 , 1
    //   4   |  2  | 2 , 2
    //   2   |  3  | 3 , 3
    //   0   |  4  | 4 , 4
    // row and * is related
    // print space (2*n)-(2*i) times

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        for(int j=1; j<=(2*n)-(2*i); j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        for(int j=1; j<=(2*n)-(2*i); j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // * * * * * * * * 
    // * * *     * * *
    // * *         * *
    // *             *
    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *
    return 0;
}

// row = n
// row >= 1
// print *, row times
// print space, (2 * n) - (2 * row) times
// print *, row times
// row = row - 1


// row = 1
// row <= n
// print *, row times
// print space, (2 * n) - (2 * i) times
// print *, row times
// row = row + 1