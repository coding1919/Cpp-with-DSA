// Data Type Modifier

// Int - stores 4 bytes (32bits)
// in which first bit is MSB
// for +ve first bit is 0 fix
// for -ve first bit is 1 fix
// rest 31 bits are remained with the combination of 0 or 1
// so for -ve -> -2^31
// so for +ve -> 0 to 2^31-1
// so overall range is -2^31 to 2^31-1
// but is we want to store number 2^32 it cant be stored and gives wrong number so we use data modifier
#include <iostream>
using namespace std;

int main() {
    // long -> long int, float, double
    // it gives >= 4 bytes
    // it can give 8 bytes (system dependent here it gives 4)
    // for 8 bytes - -2^63 to 2^63-1
    cout<<sizeof(int)<<endl; 
    cout<<sizeof(long int)<<endl; 
    
    // short -> short int
    // It gives -> 2 bytes 
    cout<<sizeof(int)<<endl; 
    cout<<sizeof(short int)<<endl; 

    // long -> long long int
    // It gives -> 8 bytes 
    cout<<sizeof(int)<<endl; 
    cout<<sizeof(long long)<<endl;
    
    // signed -> int, float, double by default signed
    // which has both +ve and -ve number can be stored

    // unsigned ->
    // which has only +ve number can be stored
    // so now for int 4 bytes -> 0 to 2^32-1
    // because MSB here doesn't require signs and that MSB bit is used to store the data

    unsigned int x = -10;
    cout<<x<<endl;
    return 0;
}

