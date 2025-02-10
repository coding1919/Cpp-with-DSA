#include <iostream>
using namespace std;

int main() {
    cout<<"Swap Function"<<endl;
    int a, b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<"Using Int"<<endl;
    swap(a, b); // swap is a built in function
    cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;
    
    float x, y;
    cout<<"Enter two number: ";
    cin>>x>>y;
    cout<<"Using Float"<<endl;
    swap(x, y); // swap is a built in function
    cout<<"a = "<<x<<"\t"<<"b = "<<y<<endl;
    return 0;
}

// Swap Function
// Enter two number: 2
// 4
// Using Int
// a = 4   b = 2
// Enter two number: 3.4
// 5.1
// Using Float
// a = 5.1 b = 3.4