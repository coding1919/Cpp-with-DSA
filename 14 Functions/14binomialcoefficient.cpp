// calculate nCr binomial coefficient for n & r

// n=8, r=2
// nCr = n!/r!(n-r)!
// 8C2 = 8!/2!*(8-2)!
// 8C2 = 8*7*6!/2!*6! (6! cuts)
// 8C2 = 8*7/2! (8/2=4)
// 8C2 = 4*7
// 8C2 = 28

#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    if(n==0 || n==1){
        return 1;
    }
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
    return fact_n / (fact_r * fact_nmr); 
}

int main() {
    int n, r, binoCoeff;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    cout<<nCr(n, r)<<endl;
    return 0;
}


// #include <iostream>
// using namespace std;

// int factorial(int n){
//     int fact = 1;
//     if(n==0 || n==1){
//         return 1;
//     }
//     for(int i=1; i<=n; i++){
//         fact = fact * i;
//     }
//     return fact;
// }

// int main() {
//     int n, r, binoCoeff;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<"Enter r: ";
//     cin>>r;
//     binoCoeff = (factorial(n))/(factorial(r)*factorial(n-r));
//     cout<<binoCoeff<<endl;
//     return 0;
// }
