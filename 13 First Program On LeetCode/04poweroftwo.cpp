#include <iostream>
using namespace std;

int main() {
    // Power Of 2
    // 2^0 = 1 - 1
    // 2^1 = 2 - 10
    // 2^2 = 4 - 100
    // 2^3 = 8 - 10000
    // 2^4 = 16 - 100000
    // 2^5 = 32 - 1000000

    // if (x<1) then return 0

    // 2 | 16 | 
    // 2 |  8 | 0 
    // 2 |  4 | 0 
    // 2 |  2 | 0 
    //   |  1 | 0 

    // while dividing the rem is 0 for all the number then it is power of 2
    // and the condition will be when (x!=1)
    // (x%2==1) then it will be return 0
    // otherwise divide x/2
    // and then return 1 when condition breaks

    int num;
    cout<<"Enter number: ";
    cin>>num;
    if(num<1){
        cout<<0<<endl;
        return 0;
    }
    while(num!=1){
        if(num%2==1){
            cout<<0<<endl;
            return 0;
        }
        num=num/2;
    }
    cout<<1<<endl;
    return 0;
}
