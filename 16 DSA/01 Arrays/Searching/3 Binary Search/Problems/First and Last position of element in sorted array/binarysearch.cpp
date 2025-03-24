//       0   1   2   3   4   5
// arr | 5 | 7 | 7 | 8 | 8 | 10 |
// start = 0, end = 5, first = -1, last = -1, mid
// mid = (0+5)/2 = 2 -> 7
// 7==8 (false)
// 7<8 (true)
// start = 2 + 1 = 3, end = 5
// mid = (3+5)/2 = 4 -> 8
// 8==8 (true) -> first = 4
// start = 3, end = 4 - 1 = 3
// mid = (3+3)/2 = 3 -> 8
// 8==8 (true) -> first = 3
// start = 3, end = 3 - 1 = 2  
// (first while loop stops because 3>2 -> start>end)


// start = 0, end = 5
// mid = (0+5)/2 = 2 -> 7
// 7==8 (false)
// 7<8 (true)
// start = 2 + 1 = 3, end = 5
// mid = (3+5)/2 = 4 -> 8
// 8==8 (true) -> last = 4
// start = 4 + 1 = 5, end = 5
// mid = (5+5)/2 = 5 -> 10
// 10==8 (false)
// 10<8 (false)
// 10>8 (true)
// start = 5, end = 5 - 1 = 4  
// (next while loop stops because 5>4 -> start>end)

#include <iostream>
using namespace std;

void firstLastPosition(int arr[], int n, int key, int &first, int &last){
    first = -1, last = -1;
    int start = 0, end = n-1, mid;
    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid] == key){
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    start = 0, end = n - 1;
    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid] == key){
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
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
    cout<<"Enter the element to be searched: ";
    cin>>key;
    cout<<"First and Last position of element in sorted array: "<<endl;
    int first, last;
    firstLastPosition(arr, n, key, first, last);
    cout<<"First Position: "<<first<<endl;
    cout<<"Last Position: "<<last<<endl;
    return 0;
}

