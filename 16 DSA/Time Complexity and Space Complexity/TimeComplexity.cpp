// What is Time Complexity?
// Time Complexity - Total time taken by an algorithm

// Why Time Complexity is needed?
// Because one question can be solved with multiple approach. so which approach is best with less amount of time we will solve using that approach

// Problem
//    |
// solution
//  / | \
// A1 A2 A3 
// 5 >10    - seconds

// sum of n numbers
//             old      |       new
// i/p->      1000      |       1000
// sec->      2sec      |       1sec

// we cannot calculate in seconds because result will be different

// the time can vary when we run next time because of the resources used by other apps and software

// Time Complexity != Time Taken

// Algorithm that can be depend on input or not depend on input

// Time Complexity :- It is the total time taken by an alagorithm to run as a function of length of the input

// Old PC

//  Time^
//      |          /
//    50-         /
//      |        /
//    40-       /
//      |      /
//    30-     /
//      |    /
//    20-   /
//      |  /
//    10- /
//      |/
//     0---|---|---|---|---|--->n
//        10  20  30  40  50

// Time depends on
// Time = n

// whereas in New PC it will be more slanted linear line
// Time depends on
// Time = n/2

// Comparision is done withthe mathematical function in term of n

// both Old and New PC gives linear growth for same algorithm so both n ~ n/2 are approximatey same and can consider n


// Big(O) -> worst case -> O(n) -> mostly used
// Big(Ω) -> best case -> Ω(n)
// Big(θ) -> average case -> θ(n)

// for(int i=1; i<=n; i++){
//     cout<<"hello";
// }

// in this one work at i=1 (this only one times so 4)
// another one work at i<=n
// another one work at cout
// another one work at i++

//    1 2 3 4 5........n
// so 4+3+3+3+3........3
// 3n+1 (here ignore the constant then it will be O(n))

// 1. constant term ignore in result (constant wont cause major impact so they are removed)
// 2. if has multiple dependencies 2N^3 + 3N^2 + N in which first ignore constant (1st condition) N^3 + N^2 + N then take a big one from it N^3 (N^2 + N - are ignored)

// this is done to simplify comparision

// by ignoring constant and taking 3 as 1 because it is the one operation to print or cout hello in it
// 1+1+1+1+1.....n = O(n)

// 1.
// linear search:
// for(int i=0; i<n; i++){
//      if(arr[i]==x)}{
//          cout<<"got"<<endl;
//          break;
//      }
// }
// arr[5]=|6|7|5|1|8|
// if we need to search element x=6 which is in arr[0] which can be searched within one iteration so it is best case so it will be Ω(1)
// if we need to search element x=8 which is in last position arr[4] which can be searched with n or 5 iteration so it is worst case so it wil be O(n)
// if we need to search element x=6,7,5,1,8 which is in arr[0],arr[1],arr[2],arr[3],arr[4] which can be searched with 1 to n or 5 iteration which will be 1+2+3+...+n/n -> n*(n+1)/2 -> n so it is average case so it wil be θ(n)


// 2.
// cin>>n;
// for(int i=0; i<10; i++){
//      cout<<"hello";
// }
//    n   |    steps
//   10   |     10
//  100   |     10
// 1000   |     10

// O(10) = O(1) (for constant time)
// Ω(10) = Ω(1)
// θ(10) = θ(1)

// 3.
// sum of n numbers
// cout<<n*(n+1)/2<<endl;
// O(1)
// Ω(1)
// θ(1)

// 4.
// for(int i=1; i<=n; i++){
//      for(int j=1; j<=n; j++){
//          cout<<"hello";
//      }
// }

// i=1    | i=2    | i=3    .. i=n
// j=1ton | j=1ton | j=1ton .. j=1ton
// ntimes | ntimes | ntimes .. ntimes

// n+n+n+...+n = n^2
// O(n^2)
// Ω(n^2)
// θ(n^2)

// another way
// first check whether inner loop depends on outer loop that is j depends on i - here in this it should not depend
// then see how much times outer loop runs - ntimes
// then see how much times inner loop runs - ntimes
// n*n = n^2

// 5.
// for(int i=1; i<=n; i++){
//      for(int j=1; j<=i; j++){
//          cout<<"hello";
//      }
// }

// i=1    | i=2    | i=3    .. i=n
// j=1to1 | j=1to2 | j=1to3 .. j=1ton
// 1times | 2times | 3times .. ntimes

// 1+2+3+...+n
// n*(n+1)/2 = n^2
// O(n^2)

// 6.
// for(int i=1; i<=n; i++){
//      for(int j=1; j<=i^2; j++){
//          cout<<"hello";
//      }
// }

// i=1    | i=2    | i=3    .. i=n
// j=1to1 | j=1to4 | j=1to9 .. j=1ton
// 1times | 4times | 9times .. n^2times

// 1+4+9+n^2
// n*(n+1)(2n+1)/6
// n^3 + n^2
// O(n^3)

// 7.
// for(int i=1; i<=n; i++){
//      for(int j=1; j<=m; j++){
//          cout<<"hello";
//      }
// }

// i=1    | i=2    | i=3    .. i=n
// j=1tom | j=1tom | j=1tom .. j=1tom
// nmtimes | nmtimes | nmtimes .. nmtimes

// O(n*m)

// 8.
// for(int i=1; i<=n; i++){
//      for(int j=1; j<=i^2; j++){
//          for(int k=1; k<=n/2; k++){
//              cout<<"hello";
//          }
//      }
// }

// i=1     | i=2     | i=3    .. i=n
// j=1to1  | j=1to4  | j=1to9 .. j=1ton^2
// k=1ton/2| k=1ton/2| k=1ton/2 .. k=1ton/2
// n/2times|4n/2times|9n/2times .. n^2*n/2times

// n/2 + 2^2*n/2 + 3^2*n/2 + ... n^2*n/2
// n/2 (1+2^2+3^2+...+n^2)
// n/2 * n*(n+1)(2n+1)
// O(n^4)

// 9.
// for(int i=1; i<=n; i=i*2){
//      cout<<"hello"<<endl;
// }

// i=1 | i=2 | i=4 | i=8 .. i=n
//  1  |  1  |  1  |   1 ..  1
// 2^0 | 2^1 | 2^2 | 2^3 .. 2^k

// power + 1 (printing times)
// k+1 times print in 2^k
// n=2^k
// logn=klog2
// k=logn/log2
// k=log2n 
// k+1 = log2n + 1
// O(log2n)

// we can keep in mind like this:
// if we get 1-2-4-8-16-32....n
// then it is log2n
// in reverse way also same

// if we get 1-3-9-27-81.....n
// then it is log3n
// in reverse way also same

// in 4 ways log4n

// 10.
// for(int i=n/2; i<=n; i++){
//      for(int j=1; j<=n/2; j++){
//          for(int k=1; k<=n; k++){
//              cout<<"hello"<<endl;
//          }
//      }
// }

// n/2 times 
// n/2 times 
// n times 
// n/2*n/2*n
// O(n^3)

// 11.
// for(int i=n/2; i<=n; i++){
//      for(int j=1; j<=n; j=2*j){
//          for(int k=1; k<=n; k=2*k){
//              cout<<"hello"<<endl;
//          }
//      }
// }

// n*log2n*log2n // multiplication so can't ignore only in addition ignore
// n(log2n)^2 

// 12.
// for(int i=1; i<=n; i++){
//      for(int j=1; j<=n; j=j+i){
//          cout<<"hello"<<endl;
//      }
// }

// i=1     | i=2      | i=3    .. i=n
// j=1ton  | j=1ton/2 | j=1ton/3 .. j=1ton/n
// ntimes  | n/2times | n/3times .. 1times

// n+n/2+n/3+...+n/n
// n(1+1/2+1/3+.....+1/n)
// 1+1/2+1/3+.....+1/n - harmonic series (A "harmonic series" is a mathematical sequence where you add up the reciprocals of all positive whole numbers, like 1 + 1/2 + 1/3 + 1/4 + ...; essentially, it's a sum of fractions where the numerator is always 1 and the denominator keeps increasing by one, and interestingly, even though the individual fractions get smaller, the total sum of this series keeps getting larger and larger, meaning it "diverges" to infinity.)
// denominator follows an arithmetic progression(AP)
// nlogen
// O(nlogen)
