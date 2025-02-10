#include <iostream>
using namespace std;

void swapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<"Using Call By Value"<<endl;
    cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;
    swapByValue(a, b);
    cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;
    
    cout<<"Using Call By Reference"<<endl;
    cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;
    swapByReference(a, b);
    cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;
    return 0;
}

// Enter two number: 5
// 9
// Using Call By Value
// a = 5   b = 9
// a = 5   b = 9
// Using Call By Reference       
// a = 5   b = 9
// a = 9   b = 5 


// normal variables that are int, float, char, double, bool -> are pass by value
// Data structures (C++ STL) vector, stack, linked list -> are pass by reference