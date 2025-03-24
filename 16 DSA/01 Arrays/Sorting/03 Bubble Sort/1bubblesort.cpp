//         0   1   2   3   4 
// arr = | 7 | 4 | 8 | 5 | 3 |
// n = 5

// round 1:
// | 7 | 4 | 8 | 5 | 3 |  -> Question
// | 4 | 7 | 8 | 5 | 3 | -> 7>4 so swap
// | 4 | 7 | 8 | 5 | 3 | -> 7<8 so no swap
// | 4 | 7 | 5 | 8 | 3 | -> 8>5 so  swap
// | 4 | 7 | 5 | 3 | 8 | -> 8>5 so  swap
// (0-3) times 

// round 2:
// | 4 | 7 | 5 | 3 | 8 | -> 4<7 so no swap
// | 4 | 5 | 7 | 3 | 8 | -> 7>5 so  swap
// | 4 | 5 | 3 | 7 | 8 | -> 7>3 so  swap
// this step no need -> | 4 | 5 | 3 | 7 | 8 | -> 7<8 so no swap
// (0-2) times 

// round 3:
// | 4 | 5 | 3 | 7 | 8 | -> 4<5 so no swap
// | 4 | 3 | 5 | 7 | 8 | -> 5>3 so  swap
// this step no need -> | 4 | 3 | 5 | 7 | 8 | -> 5<7 so no swap
// (0-1) times 

// round 4:
// | 3 | 4 | 5 | 7 | 8 | -> 4>3 so swap
// this step no need -> | 3 | 4 | 5 | 7 | 8 | -> 4<5 so no swap
// (0-0) times 

// no of rounds = n-1

// for each rounds:
// for(int i=0; i<n-1; i++){
//      if(arr[i] > arr[i+1]){
//          swap(arr[i], arr[i+1]);
//      }
// }

// outer loop
// for(int i=n-2; i>=0; i--){
//      for(int j=0; j<=i; j++){
//          if(arr[j]>arr[j+1]){
//              swap(arr[j], arr[j+1]);
//          }
//      }
// }


// Time Complexity:
// i=n-2   | i=n-3    ....... i=0
// j=0ton-2| j=0ton-3 ....... j=0to0
// n-1     | n-2      ....... 1

// (n-1)+(n-2)+.....+1
// ((n-1)*n)/2
// n^2
// O(n^2)

// Best Case: O(n), Omega(1)
// for(int i=n-2; i>=0; i--){
//      bool swapped = 0;
//      for(int j=0; j<=i; j++){
//          if(arr[j]>arr[j+1]){
//              swap(arr[j], arr[j+1]);
//              swapped=1;
//          }
//      }
//      if(swapped==0){
//          break;
//      }
// }

// Worst case: O(n^2)
// Average case: O(n^2), theta(n^2 )

// Space Complexity:
// variable i and j has taken the memory so it is constant value
// so it is 1
// O(1)

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
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
    cout<<"Selection Sort: "<<endl;
    bubbleSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
