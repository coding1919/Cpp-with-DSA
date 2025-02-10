// Introduction to Array

// It stores same type of data type (only int or only float or only char or only double...)
// It stores at contigous location

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


// int arr[5];
//  0  1  2 3 4
// |8|10|12|4|7|
// a[0] = 8 [500](address of a[0])
// a[1] = 10 [504](address of a[1])
// a[2] = 12 [508](address of a[2])
// a[3] = 4 [512](address of a[3])
// a[4] = 7 [516](address of a[4])