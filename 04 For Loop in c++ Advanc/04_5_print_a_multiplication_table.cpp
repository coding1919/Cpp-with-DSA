#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Multiplication Table of "<<n<<": "<<endl;
    for (int i =1; i <= 10; i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    
    // another method
    cout<<endl;
    for (int i = n; i <= 10*n; i+=n)
    {
        cout<<n<<" x "<<i/n<<" = "<<i<<endl;
    }
    
    return 0;
}
