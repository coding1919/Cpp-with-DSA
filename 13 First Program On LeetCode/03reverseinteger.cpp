#include <iostream>
using namespace std;

int main() {
    // Reverse Integer

    // 478 -> 874
    // 76338 -> 83367

    // ans = ans * 10 + rem

    // we can do like this
    // ans = 0
    // 438 % 10 = 8
    // 438 / 10 = 43
    // ans = 0 * 10 + 8 = 8
    // 43 % 10 = 3
    // 43 / 10 = 4
    // ans = 8 * 10 + 3 = 80 + 3 = 83
    // 4 % 10 = 4
    // 4 / 10 = 0 
    // ans = 83 * 10 + 4 = 830 + 4 = 834
    // because number become zero it gets stopped for condition 438>0, 43>0, 4>0, 0>0(false so stop)

    // c++ division
    //     -1
    //  5 | -7
    //      +5
    //      -2

    // let us assume
    // 236789 - this fits in integer
    // 987632 - this not fits in integer
    // so ans makes it overflow
    // ans*10+rem > INT_MAX 
    // ans > INT_MAX-rem/10
    // but rem is always between 0 to 9 so when dividing by 10 it gives 0 so ignore it
    // when ans > INT_MAX/10 then return it 0
    // ans*10+rem < INT_MIN 
    // when ans*10+rem < INT_MIN/10 then return it 0 
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int ans=0, rem;
    while(num!=0){
        rem=num%10;
        num=num/10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            cout<<0<<endl;
        }
        ans=ans*10+rem;
    }
    cout<<ans<<endl;

    return 0;
}
