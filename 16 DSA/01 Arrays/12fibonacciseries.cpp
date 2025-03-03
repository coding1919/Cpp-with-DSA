// The Fibonacci sequence is a series of numbers where each number is the sum of the two numbers before it. The sequence starts with 0 and 1, and continues with 1, 2, 3, 5, 8, 13, 21, 34, and so on. 

// In this the user gives the number let us assume 7 then we have to return or print 7th element in the fibonacci series which is n=8
// initially arr[0] has 0
// initially arr[1] has 1
// then we start loop from i=2 to n-1
// and to sum of both previous two numbers we use arr[i] = arr[i-1] + arr[i-2]
// then to print or return the nth element we have to print last element of an array which is arr[n-1] (because of 0 based index)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2; i<n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout<<arr[n-1]<<endl;
    return 0;
}
