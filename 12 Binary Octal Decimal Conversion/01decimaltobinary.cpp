#include <iostream>
using namespace std;

int main() {
    // Decimal to Binary Conversion:

    // converting decimal 13 to binary
    //  2 | 13 |    
    //  2 |  6 | 1  
    //  2 |  3 | 0  
    //  2 |  1 | 1  
    //    |  0 | 1  
    // 01101 - binary form

    // binary - base 2 - {0,1}
    // decimal - base 10 - {0,1,2,3,4,5,6,7,8,9}

    // why reverse order?
    // converting 143 decimal to decimal
    //  10 | 143 |    
    //  10 |  14 | 3   
    //  10 |   1 | 4   
    //     |   0 | 1  
    // reverse order we get 0143 
    // 143 = 143 (so we use reverse order)

    // how to do in code?
    // base is 2 so we can use that in for loop
    // decimal number gets decreased to 0 that is the break condition
    // but the combining 1101 is done by
    //  if a=2 and b=5
    // a+b = 2+5 = 7 - wrong
    // a*10 + b = 2*10 + 5 = 25 - correct 
    // for 258
    // 25*10 + 8 = 258
    // 2*10^2 + 5*10^1 + 8*10^0
    // (2*10^1+5)*10
    // 2*10^2 + 5*10^1 + 8*10^0
    // +9
    // (2*10^2 + 5*10^1 + 8*10^0)*10 +9
    // 2*10^3 + 5*10^2 + 8*10^1 + 9*10^0

    // 3624
    // 3
    // 3*10+6 = 36
    // 36*10+2 = 362
    // 362*10+4 = 3624

    // ans = 0
    // ans = ans * 10 + num

    // a = 6, b = 9
    // ans = 9*10+6 = 96
    
    // 6492 to 2946
    // 6
    // 4*10 = 46
    // 9*100 + 46 = 946
    // 2*1000 + 946 = 2946

    // ans = num * 10^i + ans

    //    | Num| rem
    //  2 | 13 |    
    //  2 |  6 | 1  
    //  2 |  3 | 0  
    //  2 |  1 | 1  
    //    |  0 | 1  
    // 01101 - binary form
    // ans = rem * 10^i + ans
    // ans = 0
    // ans = 1*10^0+0 = 1
    // ans = 0*10^1+1 = 1
    // ans = 1*10^2+1 = 101
    // ans = 1*10^3+101 = 1101

    int n;
    cout<<"Decimal to Binary"<<endl;
    cout<<"Enter Decimal: ";
    cin>>n;
    int rem;
    int ans = 0;
    int mul = 1;
    while(n>0){
        rem = n % 2; // or rem = num & 1;
        n = n / 2; // or num = num >> 1;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout<<"Binary: "<<ans<<endl;

    // if large number it gets difficult to convert into binary in the above code because integer cant do that
    
    return 0;
}
