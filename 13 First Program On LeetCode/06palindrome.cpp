#include <iostream>
using namespace std;

int main() {
    // Palindrome

    // 121 - 121
    // -121 - 121-
    // negative number is not palindrome
    // give that number(n) value to new variable(num) so that number is retained 
    // use the same process as reverse
    // codition is num>0 or num!=0
    // get the rem = n%10
    // get the num = num/10
    // then ans = ans*10+rem

    // 10 | 632 | 
    // 10 |  63 | 2
    // 10 |   6 | 3
    //    |   0 | 6
    // ans=0
    // 0*10+2 = 2
    // 2*10+3 = 23
    // 23*10+6 = 236

    // if that num == reverse then it is palindrome otherwise not a palindrome

    int num;
    cout<<"Enter number: ";
    cin>>num;
    int original=num, rem, reverse=0;
    if(num<0){
        cout<<0<<endl;
    }
    while(num!=0){
        rem = num%10;
        num = num/10;
        reverse = reverse*10+rem;
    }
    if(original == reverse){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}
