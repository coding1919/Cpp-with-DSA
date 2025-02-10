#include <iostream>
using namespace std;

int main() {
    // Decimal To Octal Conversion 

    // Octal = {0,1,2,3,4,5,6,7} - 8 numbers
    //  8 | 13 | 
    //  8 |  1 | 5
    //  8 |  0 | 1

    // 13 - 015 or 15 - ignore 0

    int num;
    cout<<"Enter Decimal Number: ";
    cin>>num;
    int rem;
    int ans = 0;
    int mul = 1;
    while(num>0){
        rem = num % 8;
        num = num / 8;
        ans = rem * mul + ans;
        mul = mul * 10; 
    }
    cout<<"Octal: "<<ans<<endl;
    return 0;
}
