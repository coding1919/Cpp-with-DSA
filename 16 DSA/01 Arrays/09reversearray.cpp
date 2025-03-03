#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n - 1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// void reverseArray(int arr[], int n){
//     int temp[1000];
//     int i=n-1;
//     int j=0;
//     while(i>=0){
//         temp[j] = arr[i];
//         j++;
//         i--;
//     }
//     for(int i=0; i<n; i++){
//         arr[i] = temp[i];
//     }
// }

int main() {
    int n; 
    cout<<"Enter n: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Original Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverseArray(arr, n);
    cout<<"Reverse Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
