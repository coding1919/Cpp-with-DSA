#include <iostream>
#include <algorithm>
using namespace std;

void moveZeroesToEnd(int arr[], int n){
    stable_partition(arr, arr+n, [](int n) { 
        return n != 0; });
}

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter "<<n<<" numbers: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Original Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    moveZeroesToEnd(arr, n);
    cout<<"Move all zeros to end of array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

// Time complexity -> O(n)
// Space complexity -> O(1)