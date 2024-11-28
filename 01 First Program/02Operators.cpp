#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    cout << "Arithmetic Operations: " << endl;
    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Remainder: " << a % b << endl;
    cout << "5 / 2 = " << 5 / 2 << endl;
    cout << "5 / 2 = " << 5 / (double)2 << endl;

    int ans = 7 / (double)3;
    cout << "7 / 3 = " << ans << endl;

    cout << "\n";

    cout << "Relational Operations: " << endl;
    cout << "less than (<): " << (a < b) << endl;
    cout << "less than or equal to (<=): " << (a <= b) << endl;
    cout << "greater than (>): " << (a > b) << endl;
    cout << "greater than or equal to (>=): " << (a >= b) << endl;
    cout << "equal to (==): " << (a == b) << endl;
    cout << "not equal to (!=): " << (a != b) << endl;

    cout << "\n";

    cout << "Logical Operations: " << endl;
    cout << "NOT (!): " << endl;
    cout << "3 < 5 = true " << (3 < 5) << endl;
    cout << "!(3 < 5) = false " << !(3 < 5) << endl;
    cout << "AND (&&): " << endl;
    cout << "3 < 5 (true) && 5 < 10(true) = true " << ((3 < 5) && (5<10)) << endl;
    cout << "3 < 5 (true) && 15 < 10 (false) = false " << ((3 < 5) && (15<10)) << endl;
    cout << "13 < 5 (false) && 5 < 10 (true) = false " << ((13 < 5) && (5<10)) << endl;
    cout << "13 < 5 (false) && 15 < 10 (false) = false " << ((13 < 5) && (15<10)) << endl;
    cout << "OR (||): " << endl;
    cout << "3 < 5 (true) || 5 < 10(true) = true " << ((3 < 5) || (5<10)) << endl;
    cout << "3 < 5 (true) || 15 < 10 (false) = true " << ((3 < 5) || (15<10)) << endl;
    cout << "13 < 5 (false) || 5 < 10 (true) = true " << ((13 < 5) || (5<10)) << endl;
    cout << "13 < 5 (false) || 15 < 10 (false) = false " << ((13 < 5) || (15<10)) << endl;

    return 0;
}
