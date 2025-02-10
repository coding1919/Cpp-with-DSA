#include <iostream>
using namespace std;

int main()
{
    // Leap Year
    // year which is divided by 400 is a leap year
    // year which is divided by 4 and not divided by 100 is a leap year
    // all other years are not a leap year

    int year;
    cout<<"Enter year: ";
    cin>>year;
    if (year % 400 == 0)
    {
        cout<<year<<" is a leap year"<<endl;
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        cout<<year<<" is a leap year"<<endl;
    }
    else
    {
        cout<<year<<" is not a leap year"<<endl;
    }
    return 0;
}
