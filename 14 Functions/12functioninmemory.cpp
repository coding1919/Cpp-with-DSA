// Function in memory 

// We have two types of memory
// Stack Memory (Data Structure - book upon book) (Static Allocation)
// Heap Memory  (Dynamic Allocation)

// Generally functions are stored in Stacks

// starting point is main function of code
// user-defined functions are called within main function 
// main function is called automatically by the compiler

// when main function is automatically called first time it creates a layer in stack memory which is called as stack frame where it stores all the data that is present within that main function
// if there was int x = 10; within main function then that variable would occupy space in that stack frame
// user-defined function when gets called it creates the separate layer for it and stores its all data in its layer (stack frame) 
// it is known as call stack 

// EVERY FUNCTION IS STORED IN THE STACK MEMORY IN THE FORM OF STACK FRAMES
// THE PARTICULAR VARIABLES AND DATAS OF THAT FUNCTION IS STORED WITHIN ITS STACK FRAME ONLY
// WHERE THE CONTROL IS PRESENT IN THE FUNCTION THAT FUNCTION IS PRESENT WITHIN THE TOP OF THAT STACK

// when the value gets returned back to the main function then the particular function which returned that value will be removed from that call stack 
// at last when main function return the value return 0; then the stack gets empty
// the statements after the return statement will not be executed
// because return is the final statement

// we can use just return; statement to move the control of the program from function back to the main


#include <iostream>
using namespace std;

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int main() {
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<sum(a, b)<<endl;
    return 0;
}
