// Introduction to Array

// Data Structures - To store data (linear, hierarchical etc)
// Algorithms - operation (searching, sorting etc)

// It stores same type of data type (only int or only float or only char or only double...)
// It stores at contigous location (linear)

// Declaration
// syntax:
// datatype arrayname[sizeofarray];
// int a[1000];
// a is an array of size 1000 which stores the integer values

// adding value to the array:

// 1.
// int a[5] = {6,8,5,1,9};
//    0 1 2 3 4  -> indexing(0ton-1)
// a |6|8|5|1|9| 
// a[0] = 6
// a[1] = 8
// a[2] = 5
// a[3] = 1
// a[4] = 9

// 2.
// int a[] = {5,2,8,3}; (size auto)
//    0 1 2 3   -> indexing
// a |5|2|8|3| 
// a[0] = 5
// a[1] = 2
// a[2] = 8
// a[3] = 3

// 3.
// int arr[10]; (user i/p method)
// for(int i=0; i<10; i++){
    //      cin>>arr[i];
    // }
    
    // 4.
    // int a[5] = {8,4};
    //    0 1 2 3 4  -> indexing
    // a |8|4| | | | 
    // empty place is filled with garbage value
    
    // 5.
    // int a[5] = {0};
    //    0 1 2 3 4  -> indexing
    // a |0|0|0|0|0| 
    // when single 0 is given it fills all the spaces in that array with 0
    // it is valid only for 0 not for any other number
    
    
// printing:
// int a[5] = {42,9,72,19};
// for(int i=0; i<5; i++){
    //      cout<<a[i];
    // }

// accessing:
// index -> 0 to size-1
// int a[5] = {5,9,3,8,2};
// a[2] = 6;
// cout<<a[0]<<endl;
// cout<<a[1]<<endl;
// cout<<a[2]<<endl;
// cout<<a[3]<<endl;
// cout<<a[4]<<endl;
// cout<<a[5]<<endl; // warning (garbage value)



// It stores at contigous location

// in computers memory there are unique address to store and manipulate the data in that particular location

// 1bit = 1transistor
// 8bit = 1byte
// 2^10byte = 1KB

// it is byte addressable -> each byte gets a unique address in computer
// why not bit addressable?
// for example in case of home we give address for the home not for the particular location in home like we dont give kitchen address, bedroom address, bathroom address, living room address
// they are combined all in one place which we call it has home and give the address
// and in village if there are 100 homes that 100 homes as different address same way if there are 100 bytes then the 100 bytes has different address not bits 
// in some case it maybe 2bytes combined and gets address like 2 bytes = address or 4 bytes = address


// int arr[5]; (4 bytes)
//  0  1  2 3 4
// |8|10|12|4|7|
// a[0] = 8 [500](address of a[0])
// a[1] = 10 [504](address of a[1])
// a[2] = 12 [508](address of a[2])
// a[3] = 4 [512](address of a[3])
// a[4] = 7 [516](address of a[4])

// so this is continous

// 0 based index:
// to take an address of element
// address index = arr + index * size of data type
// = 500 + 2 * 4
// = 508

// if 1 based index:
// address index = arr + (index-1) * size of data type
// it has 3 operation(+,-,*) computer wants more resource here so prefers index starts with 0

// char name[5];
//   0   1   2   3   4
// |'a'|'e'|'i'|'o'|'u'|
// name[0] = 'a' [100]
// name[1] = 'e' [101]
// name[2] = 'i' [102]
// name[3] = 'o' [103]
// name[4] = 'u' [104]

// address index = arr + index * size of data type
// 100 + 3 * 1
// 103

// 32-bit processor
// max 4 GB RAM
// converting 4GB RAM into 2^32 byte
// 32-bit(it says the address that by sending that address and getting data or storing data in that address) and powered 32 both are same
// if 4 byte then for each byte address will be 0,1,2,3 and if we convert it into binary it will be 00,01,10,11 and to store it we need 2-bits and which is 2^2 byte where the 2-bits and powered 2 both are same 

// 64-bit processor
// 8,16,32 GB RAM
// 8GB gives 2^33byte is in this because all are in 2 to the power way so fit in 64 bit

// data structure are all done with the RAM to execute it faster

#include <iostream>
using namespace std;

int main() {
    int arr1[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    
    int arr2[] = {1,2,3,4,5,6,7};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    int arr3[5] = {1,2,3};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    
    // user input
    // basic
    int arr4[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>arr4[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<arr4[i]<<" ";
    }
    cout<<endl;
    
    // not to do this
    int n1;
    cout<<"Enter n: ";
    cin>>n1;
    int arr5[n1];
    for (int i = 0; i < n1; i++)
    {
        cin>>arr5[i];
    }
    for (int i = 0; i < n1; i++)
    {
        cout<<arr5[i]<<" ";
    }
    cout<<endl;
    
    // best practice is to initialize the array size with larger value because they say it should be constant not a variable size like this:
    int n2;
    cout<<"Enter n: ";
    cin>>n2;
    int arr6[1000];
    for (int i = 0; i < n2; i++)
    {
        cin>>arr6[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cout<<arr6[i]<<" ";
    }
    cout<<endl;

    // if we go out of the bond of the index to access the element (end of the array) then it gives error with garbage value

    // to know the total size of an array
    cout<<sizeof(arr1)<<endl;
    
    // to know the number of elements using size 
    cout<<sizeof(arr1)/sizeof(arr1[0])<<endl;

    return 0;
}
