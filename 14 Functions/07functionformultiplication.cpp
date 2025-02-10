#include <iostream>
using namespace std;

int Mul(int a, int b);

int main() {
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int mul;
    mul = Mul(a, b);
    cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<mul<<endl;
    return 0;
}

int Mul(int a, int b){
    int mul = a * b;
    return mul;
}

// Enter two numbers: 5
// 4
// Multiplication of 5 and 4 is 20