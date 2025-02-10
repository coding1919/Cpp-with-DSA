// Function overloading in C++ allows you to have multiple functions with the same name, but with different parameters (either in number or type). The compiler determines which function to call based on the arguments you provide.

#include <iostream>
using namespace std;

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Swap(float &a, float &b){
    float temp = a;
    a = b;
    b = temp;
}

int main() {
    cout<<"Swap Function"<<endl;
    int a, b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<"Using Int"<<endl;
    Swap(a, b);
    cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;
    
    float x, y;
    cout<<"Enter two number: ";
    cin>>x>>y;
    cout<<"Using Float"<<endl;
    Swap(x, y);
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