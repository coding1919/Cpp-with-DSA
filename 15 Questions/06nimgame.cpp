// In this game there are two players
// First need to select a number n
// the player which reaches the number n first is the winner and each player can say only these 3 numbers (1, 2, 3) to reach the number n
// both the players play optimally here to win the game and they know the logic

// logic:
// the player 1 always wins if he gets any number say 23 then he have to just make it to the 4's factor that will be 20 so he will start saying 1,2,3. If 18 he needs 16 as 4's factor so he says 1,2 and the opponent(player 2) will start from the number which is already in 4's factor so he will loose and player 1 always wins
// the player one looses the game if the number n is already in 4's factor like(4,8,12,16,20,24.......) then the player one looses the game and player 2(opponent) wins the game 

// example for both ways

// player 1 winning way
// n = 19 (not in 4's factor)
// player 1 = 1,2,3 
// player 2 = 4,5 
// player 1 = 6,7 
// player 2 = 8 
// player 1 = 9,10,11 
// player 2 = 12,13,14 
// player 1 = 15 
// player 2 = 16,17 
// player 1 = 18,19 (wins)

// here in the last chance of player 2 he looses the game anyway because he dont have any options if player 2 chooses 16 then the player 1 will choose 17,18,19 if player 2 chooses 16,17 then player 1 chooses 18,19 if player 2 chooses 16,17,18 then player 1 chooses 19 so in any case player 2 will get lost)


// player 1 lossing way
// n=20 (is in 4's factor)
// player 1 = 1,2
// player 2 = 3,4
// player 1 = 5
// player 2 = 6,7,8
// player 1 = 9
// player 2 = 10,11,12
// player 1 = 13,14,15
// player 2 = 16
// player 1 = 17,18
// player 2 = 19,20 (wins)

// so in 4's factor the player starts that person looses the game

#include <iostream>
using namespace std;

bool nimGame(int n){
    if(n%4 != 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    cout<<"Choose number: ";
    cin>>n;
    int result = nimGame(n);
    if(result == 1){
        cout<<"Player 1 wins";
    }
    else{
        cout<<"Player 2 wins";
    }
    return 0;
}
