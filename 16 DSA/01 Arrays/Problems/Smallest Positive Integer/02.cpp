#include <iostream>
#include <algorithm>
using namespace std;

int smallestPositiveInteger(int arr[], int n){
    sort(arr, arr+n);
    int integer = 1;
    for(int i=0; i<n; i++){
        if(arr[i] == integer){
            integer++;
        }
        else if(arr[i] > integer){
            break;
        }
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

// Time complexity -> O(n)
// Space complexity -> O(1)
