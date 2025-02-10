#include <iostream>
using namespace std;

int main() {
    // Do While Loop:
    // i=1 - initialization
    // i++ - update
    // i<=n - break condition

    // syntax:
    // initialization
    // do
    // {
    //     /* code */
    //     /* update */
    // } while (/* condition */);

    int i=1; // initialization
    do
    {
        cout<<i<<" ";
        i++; // update
    } while (i<=10); // break condition
    cout<<endl;

    // if we use i++ before 
    i=1;
    do
    {
        i++;
        cout<<i<<" ";
    } while (i<=10);
    cout<<endl;

    // multiplication table using while loop
    int n;
    cout<<"Enter number: ";
    cin>>n;
    i=1;
    do
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    } while (i<=10);
    
    
    // sum of n natural numbers using while loop:
    cout<<"Enter number: ";
    cin>>n;
    int sum = 0;
    i=1;
    do
    {
        sum = sum + i;
        i++;
    } while (i<=n);
    cout<<"Sum = "<<sum<<endl;

    // if we use i++ before 
    sum = 0;
    i=1;
    do
    {
        i++;
        sum = sum + i;
    } while (i<=n);
    cout<<"Sum = "<<sum<<endl;
    
    return 0;
}
