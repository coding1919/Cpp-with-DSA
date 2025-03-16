#include <iostream>
using namespace std;

void moveZeroesToEnd(int arr[], int n){
    int temp[1000];
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            temp[j++] = arr[i];
        }
    }
    while(j<n){
        temp[j++] = 0;
    }
    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
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
// Space complexity -> O(n)