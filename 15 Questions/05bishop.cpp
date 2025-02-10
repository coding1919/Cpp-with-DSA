// Bishop - Camel
// It moves diagonally

// We need to know the no of moves
// Given is the position (A,B)

//     1   2   3   4   5   6   7   8
//   ---------------------------------
// 1 |   | - |   |   |   | - |   |   |
// 2 |   |   | - |   | - |   |   |   |
// 3 |   |   |   | O |   |   |   |   |
// 4 |   |   | - |   | - |   |   |   |
// 5 |   | - |   |   |   | - |   |   |
// 6 | - |   |   |   |   |   | - |   |
// 7 |   |   |   |   |   |   |   | - |
// 8 |   |   |   |   |   |   |   |   |
//   ---------------------------------


// (3,4) -> NO OF MOVES RIGHT,DOWN = 4
// (3,4) = (3-8,4-8) = (5,4) = minimum(5,4) = 4 moves
// (3,4) -> NO OF MOVES LEFT,DOWN = 3
// (3,4) = (3-8,4-1) = (5,3) = minimum(5,3) = 3 moves
// (3,4) -> NO OF MOVES LEFT,UP = 2
// (3,4) = (3-1,4-1) = (2,3) = minimum(2,3) = 2 moves
// (3,4) -> NO OF MOVES RIGHT,UP = 2
// (3,4) = (3-1,8-4) = (2,4) = minimum(2,4) = 2 moves
// Total 11 moves - answer


#include <iostream>
using namespace std;

int bishop(int a, int b){
    int count = 0;
    count += min(8-a,8-b);
    count += min(8-a,b-1);
    count += min(a-1,b-1);
    count += min(a-1,8-b);
    return count;
}

int main() {
    int a,b;
    cout<<"Enter the position of bishop(camel): ";
    cin>>a>>b;
    cout<<"Total moves: "<<bishop(a,b)<<endl;
    return 0;
}
