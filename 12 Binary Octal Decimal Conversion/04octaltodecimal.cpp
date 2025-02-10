#include <iostream>
using namespace std;

int main() {
    // Octal to Decimal Conversion
    // 15 octal number to decimal
    // 1*8^1 + 5*8^0
    // 8 + 5 
    // 13

    int num;
    cout<<"Enter Octal Number: ";
    cin>>num;
    int rem;
    int ans = 0;
    int mul = 1;
    while(num>0){
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 8; 
    }
    cout<<"Decimal: "<<ans<<endl;
    return 0;
}
