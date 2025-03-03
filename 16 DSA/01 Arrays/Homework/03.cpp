// Write a function to print all the unique values in an array

#include <iostream>
using namespace std;

void uniqueValue(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(arr[i] != arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
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
    uniqueValue(arr, n);
}
