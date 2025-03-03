// Linear search is a simple algorithm that finds a specific item in a list by checking each item in turn. It's also known as a sequential search. 

// in this the element that is to be searched is given by user that is target = 7 and we need to find that target is whether present in the array 
// if present return its index
// if not present return -1

// target = 7
//             0   1   2   3   4
// arr[5] -> | 3 | 9 | 7 | 2 | 5 |
//             ^
//           3 == 7 -> -1

//             0   1   2   3   4
// arr[5] -> | 3 | 9 | 7 | 2 | 5 |
//                 ^
//           9 == 7 -> -1

//             0   1   2   3   4
// arr[5] -> | 3 | 9 | 7 | 2 | 5 |
//                     ^
//           7 == 7 -> 2 (found)

// target = 6
//             0   1   2   3   4
// arr[5] -> | 3 | 9 | 7 | 2 | 5 |
//             ^
//           3 == 6 -> -1

//             0   1   2   3   4
// arr[5] -> | 3 | 9 | 7 | 2 | 5 |
//                 ^
//           9 == 6 -> -1

//             0   1   2   3   4
// arr[5] -> | 3 | 9 | 7 | 2 | 5 |
//                     ^
//           7 == 6 -> -1

//             0   1   2   3   4
// arr[5] -> | 3 | 9 | 7 | 2 | 5 |
//                         ^
//           2 == 6 -> -1

//             0   1   2   3   4
// arr[5] -> | 3 | 9 | 7 | 2 | 5 |
//                             ^
//           5 == 6 -> -1 (not found)

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
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
    int target;
    cout<<"Enter number to be searched: ";
    cin>>target;
    int search = linearSearch(arr, n, target);
    cout<<"Element is in index: "<<search<<endl;
    return 0;
}
