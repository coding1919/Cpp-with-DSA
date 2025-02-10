#include <iostream>
using namespace std;

int Fact(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}

int main() {
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<Fact(n);
    return 0;
}

// Enter Number: 5
// Factorial of 5 is 120