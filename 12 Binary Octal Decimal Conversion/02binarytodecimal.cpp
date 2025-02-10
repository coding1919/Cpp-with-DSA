#include <iostream>
using namespace std;

int main() {
    // Binary to Decimal Conversion
    
    // 101 binary number to decimal
    // 1*2^2 + 0*2^1 + 1*2^0 = 4 + 1 = 5
    // 101 = 5

    // 1101
    // 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0
    // 8 + 4 + 0 + 1
    // 13

    // how to get this 1101 as one by one digit?
    // 1101
    // 1101%10 = 1 - rem
    // 1101/10 = 110
    // 110%10 = 0 - rem
    // 110/10 = 11
    // 11%10 = 1 - rem
    // 11/10 = 1
    // 1%10 = 1 - rem
    // 1/10 = 0 - stop

    // ans = rem * 2 ^ i + ans;
    // ans = 0;
    // ans = 1*2^0+0 = 1
    // ans = 0*2^1+1 = 1
    // ans = 1*2^2+1 = 5
    // ans = 1*2^3+5 = 8+5 = 13

    int n;
    cout<<"Enter Binary Number: ";
    cin>>n;
    int rem;
    int ans = 0;
    int mul = 1;
    while(n>0){
        rem = n % 10;
        n = n / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout<<"Decimal: "<<ans<<endl;
    return 0;
}
