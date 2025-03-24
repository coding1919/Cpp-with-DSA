// my method:


#include <iostream>
using namespace std;

int smallestPositiveInteger(int arr[], int n){
    int integer = 1;
    while(integer <= n){
        int found = 0;
        for(int i=0; i<n; i++){
            if(integer == arr[i]){
                found = 1;
                break;
            }
        }
        if(!found){
            return integer;
        }
        integer++;
    }
    return integer;
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
    
    int integer = smallestPositiveInteger(arr, n);
    cout<<"Smallest Positive Integer: "<<integer<<endl;

    return 0;
}

// Time complexity -> O(n^2)
// Space complexity -> O(1)
