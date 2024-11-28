#include <iostream>
using namespace std;

int main()
{
    for (char c = 'a'; c <= 'e'; c++)
    {
        for (char ch = 'a'; ch <= c; ch++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    cout << endl;

    char ch = 'a';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
    cout<<endl;

    for (int i = 1; i <= 5; i++)
    {
        char name = 'a' + (i-1);
        for (int j = 1; j <= i; j++)
        {
            // char name = 'a' + (i-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // a
    // b b
    // c c c
    // d d d d
    // e e e e e
    return 0;
}

// row = 1
// row <= 5
// print name, row times
// row = row + 1