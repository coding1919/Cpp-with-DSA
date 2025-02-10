#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << 1 << endl;
        break;
    case 2:
        cout << 2 << endl;
        break;
    case 3:
        cout << 3 << endl;
        break;

    default:
        cout << "Other number" << endl;
        break;
    }

    cout << "Enter number: ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
    }

    // month name using switch
    char ch;
    cout<<"Enter first letter of month in caps: ";
    cin>>ch;
    switch (ch)
    {
    case 'J':
        cout<<"January"<<endl;
        break;
    case 'F':
        cout<<"February"<<endl;
        break;
    case 'M':
        cout<<"March"<<endl;
        break;
    case 'A':
        cout<<"April"<<endl;
        break;
    case 'm':
        cout<<"May"<<endl;
        break;
    case 'j':
        cout<<"June"<<endl;
        break;
    case 'u':
        cout<<"July"<<endl;
        break;
    case 'a':
        cout<<"August"<<endl;
        break;
    case 'S':
        cout<<"September"<<endl;
        break;
    case 'O':
        cout<<"October"<<endl;
        break;
    case 'N':
        cout<<"November"<<endl;
        break;
    case 'D':
        cout<<"December"<<endl;
        break;
    
    default:
        cout<<"Invalid input!"<<endl;;
        break;
    }
    return 0;
}
