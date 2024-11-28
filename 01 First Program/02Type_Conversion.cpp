#include <iostream>
using namespace std;

int main() {
    // Type Conversion
    char grade = 'A';
    int value = grade;
    cout << value << endl;

    // Type Casting
    double price = 100.99;
    int newPrice = (int)price;
    cout << newPrice << endl; // it ignores all the decimal values and doesn't do any roundoff
    return 0;
}
