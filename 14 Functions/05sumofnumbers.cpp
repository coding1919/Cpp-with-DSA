#include <iostream>
using namespace std;

int Sum(int a, int b); // Function Declaration

int main() {
    int x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Sum of "<<x<<" and "<<y<<" is "<<Sum(x, y)<<endl; // Function Call
    return 0;
}

int Sum(int a, int b){ // Function Definition
    int sum;
    sum = a+b;
    return sum;
}

// Enter two numbers: 4
// 5
// Sum of 4 and 5 is 9