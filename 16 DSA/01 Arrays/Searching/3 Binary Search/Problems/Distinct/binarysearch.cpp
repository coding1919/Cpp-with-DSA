//       0   1   2   3    4    5    6    7
// arr | 1 | 4 | 6 | 8 | 10 | 14 | 16 | 18 |
// key = 5

// start = 0, end = 7, mid, index = 8 (n)
// mid = (0+7)/2 = 3 -> 8
// 8==5 (false)
// 8<5 (false)
// 8>5 (true)
// index = 3
// start = 0, end = 3 - 1 = 2
// mid = (0+2)/2 = 1 -> 4
// 4==5 (false)
// 4<5 (true)
// index = 3
// start = 1 + 1 = 2, end = 2
// mid = (2+2)/2 = 2 -> 6
// 6==5 (false)
// 6<5 (false)
// 6>5 (true)
// index = 2
// start = 2, end = 2 - 1 = 1
// start>end (stops)

#include <iostream>
using namespace std;

int searchInsertPosition(int arr[], int n, int key){
    int start = 0, end = n-1, mid, index = -1;
    while(start <= end){
        mid = start + (end - start)/2;
        if(arr[mid] == key){
            index = mid;
            break;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            index = mid;
            end = mid - 1;
        }
    }
    return index;
}

int main() {
    int arr[1000];
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the lement to be searched: ";
    cin>>key;
    cout<<"Search Insert Position: "<<endl;
    int position = searchInsertPosition(arr, n, key);
    cout<<position<<endl;
    return 0;
}
