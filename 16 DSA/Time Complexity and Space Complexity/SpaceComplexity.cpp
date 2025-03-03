// Space complexity is the amount of memory an algorithm needs to run. It's a key factor in choosing data structures and designing algorithms. 
// It is an amount of space taken by an algorithm
// depends on input size or not 
// as a function of length of input


// auxillary space
// it does not include given input space and other spaces are included
// arr[5] = |1|2|3|4|5| - nsize
// O(1)

// total space complexity
// arr[5] = |1|2|3|4|5| - nsize
// n+1
// O(n)
// it does include given input space


// arr[n] = |1|2|3|4|5| - nsize - i/p
// arr[n] = |1|4|9|16|25| - nsize

// auxilary space: O(n) (not included i/p)
// total space complexity: n+n=2n - O(n)

// for(int i=1; i<n; i++){
//      cout<<i;
// }
// auxilary space: O(1) - (not included n)
// total space complexity: 1+1 - O(1) - (included n)

// int a,b,c;
// cin>>a>>b>>c;
// int d = a+b/2;
// int c = a+c/2;
// auxilary space: 1+1 O(2) - O(1)
// total space complexity: 1+1+1+1+1 - O(5) - O(1) 

// Time complexity (worst to best)
// O(n!)
// O(2^n)
// O(n^3)
// O(n^2)
// O(nlogn)
// O(n)
// O(√n)
// O(logn)
// O(1)

// comparision (n! and 2^n)
// n!   >=   2^n
// 1     |    2
// 2     |    4
// 6     |    8
// 24    |    16

// n^2 logn logn
// n^2 √n   logn
// n^2 and logn both are same in both so compare the different one
// comparison (√n and logn)
// √n   >=   logn
// 1     |    0
// 1.4   |    0.30
// 1.7   |    0.47
// 2     |    0.60
// 2.2   |    0.69
// 2.4   |    0.77