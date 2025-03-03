// i/p -> | 3 | 5 | 2 | 7 | 9 |
// o/p -> | 9 | 3 | 5 | 2 | 7 |

#include <iostream>
using namespace std;

// void rotateArrayByOne(int arr[], int n){
//     int temp = arr[n-1];
//     for(int i=n-2; i>=0; i--){
//         arr[i+1] = arr[i];
//     }
//     arr[0] = temp;
// }

// void rotateArrayByOne(int arr[], int n){
//     int temp[1000];
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             temp[j] = 
//         }
//     }
// }

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter "<<n<<" numbers: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Original Array: "<<endl;;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotateArrayByOne(arr, n);
    cout<<"Rotate Array By 1: "<<endl;;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}
