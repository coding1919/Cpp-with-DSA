#include <iostream>
using namespace std;

int main() {
    // Bitwise Operator
    // & - Bitwise And
    // | - Bitwise Or
    // ^ - Bitwise Xor
    // ~ - Complement
    // << - Left Shift
    // >> - Right Shift

    // it performs operation on 1 and 0 that is in the form of bit

    // Bitwise And (&):
    // 2&3
    // 10
    // 11
    // --
    // 10 - 2

    // Bitwise Or (|):
    // 2|3
    // 10
    // 11
    // --
    // 11 - 3

    // Bitwise Xor (^):
    // 0  0 | 0
    // 0  1 | 1
    // 1  0 | 1
    // 1  1 | 0
    // 2^3
    // 10
    // 11
    // --
    // 01 - 1

    // Left Shift (<<): (a*(2^b))
    // 6<<1
    // 00000110 - 6
    // 00001100 - 12 (6<<1)
    // 00011000 - 24 (6<<2)
    // num*2^x (formula of shifting)
    // the shifted empty place is filled with 0
    // while shifting the number can be negative because the first bit sometimes tells that the number is +ve or -ve
    // -6<<2 - not defined in compiler for -ve so it can be different answer for differnt system

    // Right Shift (>>): (a/(2^b))
    // 6>>1
    // 00000110 - 6 
    // 00000011 - 3 (6>>1)
    // 00000001 - 1 (6>>2)
    // num/2^x

    // Complement (~):
    // ~5
    // 00000101 - 5
    // 11111010 - ~5
    // how to know the answer ~5?
    // first 1's complement of ~5
    // 00000101
    // then 2's complement of 00000101 
    // to get 2's complement add +1
    // 00000101
    //       +1
    // --------
    // 00000110 - (-6)
    // ~5 = -6
    // ~13 = -14

    // precision:
    // {<<, >>} > {&,|,^}

    int a, b, ans;
    cout<<"Enter a: "; // 2
    cin>>a;
    cout<<"Enter b: "; // 3
    cin>>b;
    ans = a&b;
    cout<<ans<<endl;
    ans = a|b;
    cout<<ans<<endl;
    ans = a^b;
    cout<<ans<<endl;
    ans = a<<b;
    cout<<ans<<endl;
    ans = a>>b;
    cout<<ans<<endl;
    ans = ~a;
    cout<<ans<<endl;
    return 0;
}
