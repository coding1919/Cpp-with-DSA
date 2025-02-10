#include <iostream>
using namespace std;

int main() {
    // Add Digits

    // 27 = 2+7 = 9
    // 62 = 6+2 = 8

    // 10 | 62 |  
    // 10 |  6 |  2
    //    |  0 |  6

    // ans = 0
    // ans = ans + rem

    // but problem is little bit different
    // 249 = 2+4+9 = 15 = 1+5 = 6
    // they want it in single digit so if obtained answer is in more than single digit perform same operation again
    // 634895 = 35 = 8

    int num;
    cout<<"Enter number: ";
    cin>>num;
    while(num>9){
        int rem, ans=0;
        while(num!=0){
            rem = num % 10;
            num = num / 10;
            ans = rem + ans;
        }
        num = ans;
    }
    cout<<"Answer: "<<num<<endl;
    return 0;
}
