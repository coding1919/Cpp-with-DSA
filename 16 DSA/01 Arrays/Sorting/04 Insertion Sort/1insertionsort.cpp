//         0   1   2   3   4 
// arr = | 7 | 4 | 8 | 5 | 3 |
// n = 5

// round 1:
// | 4 | 7 | 8 | 5 | 3 |  -> 4<7 so swap
//         |              -> here left of that is sorted and right of that is unsorted
// (1-0) times which is 1 times

// round 2:
// | 4 | 7 | 8 | 5 | 3 | -> 7<8 so no swap
//             |
// (2-0) times which is 2 times

// round 3:
// | 4 | 7 | 5 | 8 | 3 | -> 5<8 so swap
// | 4 | 5 | 7 | 8 | 3 | -> 5<7 so swap
// | 4 | 5 | 7 | 8 | 3 | -> 4<5 so no swap
//                 |
// (3-0) times which is 3 times

// round 4:
// | 4 | 5 | 7 | 3 | 8 | -> 3<8 so swap
// | 4 | 5 | 3 | 7 | 8 | -> 3<7 so swap
// | 4 | 3 | 5 | 7 | 8 | -> 3<5 so swap
// | 3 | 4 | 5 | 7 | 8 | -> 3<4 so swap -> sorted
//                     |
// (4-0) times which is 4 times
// round = n-1 = 5-1 = 4 rounds

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
// for(int j=n-1; j>0; j--){
//      if(arr[j] < arr[j-1]){
//          swap(arr[j], arr[j-1]);
//      }
//      else{
//          break;
//      }
// }

// outer loop
// for(int i=1; i<n; i++){
//      for(int j=i; j>0; j--){ // >0 because if we give >=0 it will also compare beyond arr[0] where there will be a garbage value and compare with it and result maybe error so >0 is used
//          if(arr[j] < arr[j-1]){
//              swap(arr[j], arr[j-1]);
//          }
//          else{
//              break;
//          }
//      }
// }


// Time Complexity:
// i=1    | i=2    | i=3    ....... i=n-1
// j=1to1 | j=2to1 | j=3to1 ....... j=n-1to1
// 1time  | 2time  | 3time  ....... n-1 times

// 1+2+3+....+(n-1)
// ((n-1)*n)/2
// n^2
// O(n^2) -> Worst Case

// Best Case: O(n), Omega(1)
// Worst case: O(n^2)
// Average case: O(n^2), theta(n^2 )
// (n-1)+(n)+(n+1)+(n+2)....((n*(n-1))/2) / total cases
// theta(n^2) // for average

// Space Complexity:
// variable i and j has taken the memory so it is constant value
// so it is 1
// O(1)

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            else{
                break;
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
    cout<<"Insertion Sort: "<<endl;
    insertionSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
