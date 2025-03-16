// Find the second largest element in an array of unique elements of size n. Where n>3.

#include <iostream>
#include <algorithm>
using namespace std;

int secondLargest(int arr[], int n){
    sort(arr, arr+n);
    for(int i=n-2; i>=0; i--){
        if(arr[i] != arr[n-1]){
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int arr[1000];
    int n;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter "<< n <<" elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int secondMax = secondLargest(arr, n);
    cout<<"Second Largest: "<<secondMax<<endl;
    return 0;
}
