// Selection Sort

//         0   1   2   3   4
// arr = | 9 | 7 | 3 | 1 | 6 | -> 0 to n-1 
//       |-------------------|
// round 1 -> | 1 | 7 | 3 | 9 | 6 | -> 1 to n-1 
//                |---------------|
// round 2 -> | 1 | 3 | 7 | 9 | 6 | -> 2 to n-1 
//                    |-----------|
// round 3 -> | 1 | 3 | 6 | 9 | 7 | -> 3 to n-1
//                        |-------|
// round 4 -> | 1 | 3 | 6 | 7 | 9 |-> sorted

// no of rounds is 4 because the 5th element or in round will be already in sorted way

// for smallest element index in array
// index = 0;
// for(int i=1; i<=n; i++){
//     if(arr[i]<arr[index]){
//         index=i;
//     }
// }


// for(i=0; i<n-1; i++){
//      index=i;
//      for(int j=i+1; j<n; j++){
//          if(arr[j]<arr[index]){
//              index=j;
//          }
//      }
//      swap(arr[i], arr[index]);
// }

// Space Complexity:
// Auxilary - O(1)
// Total space - 1 + n = O(n)

// Time Complexity:
// i=0    | i=1    |.... i=n-2
// j=1ton | j=2ton |.... j=n-1ton 
// n-1    | n-2    |.... 1
// n-1+n-2+n-3....+2+1
// n^2-n
// O(n^2)
// same for best, average, worst case = O(n^2)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter "<<n<<" numbers: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Selection Sort: "<<endl;
    for(int i=0; i<n-1; i++){
        int index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
