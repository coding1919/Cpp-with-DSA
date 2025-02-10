#include <iostream>
using namespace std;

int main() {
    // While Loop:

    // i=1 - initialization
    // i<=10 - break condition
    // i++ - updation

    // syntax:
    // /* initialization */
    // while (/* condition */)
    // {
    //     /* code */
    //     /* updation */
    // }

    int i=1; // initialization
    while (i<=10) // break condition
    {
        cout<<i<<" ";
        i++; // update
    }
    cout<<endl;
    
    // multiplication table using while loop

    int n;
    cout<<"Enter number: ";
    cin>>n;
    i=1;
    while (i<=10)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }
    
    // factors of a number:
    i=1;
    while (i<=n)
    {
        if(n%i==0){
            cout<<i<<" ";
        }
        i++;
    }
    cout<<endl;

    // n number of even numbers
    cout<<"Even Numbers: ";
    i=1;
    while (i<=n)
    {
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }
    cout<<endl;

    // n number of odd numbers
    cout<<"Odd Numbers: ";
    i=1;
    while (i<=n)
    {
        if(i%2==1){
            cout<<i<<" ";
        }
        i++;
    }
    cout<<endl;
    
    
    
    return 0;
}
