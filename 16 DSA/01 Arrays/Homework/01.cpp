// Write a function to calculate sum and product of all numbers in an array

#include <iostream>
using namespace std;

int sumArray(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int productArray(int arr[], int n){
    int product = 1;
    for(int i=0; i<n; i++){
        product = product * arr[i];
    }
    return product;
}

int main() {
    int n; 
    cout<<"Enter n: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Sum of an array: "<<sumArray(arr, n)<<endl;
    cout<<"Product of an array: "<<productArray(arr, n)<<endl;
    return 0;
}
