#include <iostream>
using namespace std;

int main()
{
    // package problem:
    int package;
    cout << "Enter your package: ";
    cin >> package;
    if (package > 10)
    {
        cout << "Accepted" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
    cout<<endl;

    // marks problem
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks > 33)
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    // grade
    if(marks >= 90){
        cout<<"A\n";
    }
    else if(marks >= 80 && marks < 90){
        cout<<"B\n";
    }
    else{
        cout<<"C\n";
    }
    cout<<endl;

    // a > b:
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    if (a > b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    cout<<endl;

    // even or odd
    int num;
    cout << "Enter number:" << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    cout<<endl;

    // Homework - Adult and Teenager:
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (age > 18)
    {
        cout << "Adult" << endl;
    }
    else
    {
        cout << "Teenager" << endl;
    }
    cout<<endl;

    // vote check
    if(age >= 18){
        cout<<"You can vote"<<endl;
    }
    else{
        cout<<"You cannot vote"<<endl;
    }
    cout<<endl;

    // num is +ve or -ve or 0
    if (num > 0)
    {
        cout << "Positive" << endl;
    }
    else
    {
        if (num == 0)
        {
            cout << "Zero" << endl;
        }
        else
        {
            cout << "Negative" << endl;
        }
    }
    cout<<endl;

    // another method
    if (num > 0)
    {
        cout << "Positive" << endl;
    }
    else if (num == 0)
    {
        cout << "Zero" << endl;
    }
    else
    {
        cout << "Negative" << endl;
    }
    cout<<endl;

    // vowel or consonant
    char c;
    cout << "Enter character:" << endl;
    cin >> c;
    if(c == 'a'){
        cout<<"Vowel"<<endl;
    }
    else if(c == 'e'){
        cout<<"Vowel"<<endl;
    }
    else if(c == 'i'){
        cout<<"Vowel"<<endl;
    }
    else if(c == 'o'){
        cout<<"Vowel"<<endl;
    }
    else if(c == 'u'){
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"Consonant"<<endl;
    }

    // character is lowercase or uppercase
    if(c >= 'a' && c <= 'z'){
        cout<<"Lowercase\n";
    }
    else{
        cout<<"Uppercase\n";
    }
    cout<<endl;

    // week days
    int week;
    cout<<"Enter week days (1-7):"<<endl;
    cin>>week;
    if(week == 1){
        cout<<"Monday"<<endl;
    }
    else if(week == 2){
        cout<<"Tuesday"<<endl;
    }
    else if(week == 3){
        cout<<"Wednesday"<<endl;
    }
    else if(week == 4){
        cout<<"Thursday"<<endl;
    }
    else if(week == 5){
        cout<<"Friday"<<endl;
    }
    else if(week == 6){
        cout<<"Saturday"<<endl;
    }
    else if(week == 7){
        cout<<"Sunday"<<endl;
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
    cout<<endl;

    // print Coder army 5 times
    for(int i = 1; i <= 5; i = i + 1){
        cout<<"Coder Army"<<endl;
    }
    cout<<endl;

    // print 1-5
    for(int i = 1; i <= 5; i = i + 1){
        cout<<i<<endl;
    }
    cout<<endl;

    // print squares of 1 to 5
    for(int i = 1; i <= 5; i = i + 1){
        cout<<i*i<<endl;
    }
    cout<<endl;

    // print even numbers
    for(int i = 2; i <= 10; i = i + 2){
        cout<<i<<endl;
    }
    cout<<endl;

    // another method
    for(int i = 2; i <= 10; i = i + 1){
        if(i%2 == 0)
            cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    // print 1 5 9 13 17 21 
    for(int i = 1; i <= 21; i = i + 4){
            cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    // while loop
    int i = 0;
    while(i < 5){
        cout<<i<<"\n";
        i++; // i+=1 or i=i+1
    }
    cout<<endl;

    // do-while loop
    i = 0;
    do{
        cout<<i<<"\n";
        i++; // i+=1 or i=i+1
    }while(i < 5);
    cout<<endl;

    // do while and while difference
    do
    {
        cout<<"Hello World\n";
    } while (3>5);
    cout<<endl;

    while(3>5){
        cout<<"Hello World\n";
    }
    cout<<endl;

    // nested loops

    for(int i=1; i<=5; i++){
        cout<<"******\n";
    }
    cout<<endl;

    int m = 10;
    for(int i=1; i<=m; i++){
        cout<<"*";
    }
    cout<<endl;
    cout<<endl;

    int n = 10;
    for(int i=1; i<=n; i++){
            int m = 10;
        for(int i=1; i<=m; i++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}

// curly braces is not compulsory for single statement

// we should try to avoid infinite loop - (it is always true in loop)