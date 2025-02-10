// Write a function to reverse an integer n

#include <iostream>
using namespace std;

int reverse(int n){
    int rem, ans=0;
    while(n>0){
        rem = n % 10;
        ans = ans * 10;
        ans = ans + rem;
        n = n / 10;
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int rev = reverse(n);
    cout<<rev<<endl;
    return 0;
}
