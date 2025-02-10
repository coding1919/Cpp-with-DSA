#include <iostream>
using namespace std;

int main() {
    // 2 + 3 = 5
    // here 2 and 3 is operand
    // + is operator
    // 5 is result
    
    // Arithmetic Operator
    // 1. unary operator - (++,--) -> a=10
    // a.post increment -> a++, ++a
    //    b=a++; b=10; a=11;
    //    b=++a; b=11; a=11;
    // a.pre increment -> a--, --a
    //    b=a--; b=10; a=9;
    //    b=--a; b=9; a=9;

    int a = 10;
    int b = a++;
    cout<<"b="<<b<<"  a="<<a<<endl;
    a = 10;
    b = ++a;
    cout<<"b="<<b<<"  a="<<a<<endl;
    a = 10;
    b = a--;
    cout<<"b="<<b<<"  a="<<a<<endl;
    a = 10;
    b = --a;
    cout<<"b="<<b<<"  a="<<a<<endl;

    // 2. binary operator
    // +, -, *, /, %

    // for division:
    // 16/4 = 4
    // 18/5 = 3
    // 18/5.0 = 3.6
    cout<<18/5<<endl;
    cout<<18.0/5<<endl;
    cout<<4*13<<endl;
    cout<<4*13.2<<endl;

    // precision: 
    // double > float > int

    // {*,/,%} > {+,-}
    // within that bracket precision will be based on associativity by left to right

    // 2*3-4/2
    // 6-4/2
    // 6-2
    // 4
    return 0;
}
