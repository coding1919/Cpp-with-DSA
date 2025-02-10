// Two's Complement

// Steps (Decimal to binary)
// 1. Binary form convert
// 2. Prefix with 0 (MSB - Most Significant Bit - 0 (+ve) and 1 (-ve))
// 3. 1's complement (1->0 and 0->1)
// 4. add +1
// 5. binary number of -10 


// n = -10
// 1010 (1)
// 01010 (2)
// 10101 (3)
//    1  (4)
// 10101  
//    +1
// 10110 
// 10110 (5) (here MSB is 1 so negative number)


// Steps (Binary to Decimal)
// 1. 1's complement
// 2. add +1
// 3. Decimal number of 10110

// 10110 (-ve number)
// 01001 (1)
//    1   (2)
// 01001
//    +1
// 01010 
// 01010 (3) (-10) (because we already know it that before conversion here it is -ve)