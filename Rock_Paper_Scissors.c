#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char options[3][10] = {"rock", "paper", "scissors"};
int streak = 0;
int computerChoice; 
int playerChoice;

void menu(){
    printf("\nCurrent Streak: %d", streak);
    printf("\nSelect an option: \n 1. rock \n 2. paper \n 3. scissors \n");
    scanf("%d", &playerChoice);
}

void computerSelection(){
    srand(time(0));
    computerChoice = (rand() % 3);
}

void playerSelection(){
    if(playerChoice == 1){
        playerChoice = playerChoice -1;
        printf(" \n Computer: %s", options[computerChoice]);
        printf(" \n Player: %s", options[playerChoice]);
    }else if(playerChoice == 2){
        playerChoice = playerChoice -1;
        printf(" \n Computer: %s", options[computerChoice]);
        printf(" \n Player: %s", options[playerChoice]);
    }else if(playerChoice == 3){
        playerChoice = playerChoice -1;
        printf(" \n Computer: %s", options[computerChoice]);
        printf(" \n Player: %s", options[playerChoice]);
    }else{
        printf("Invalid input");
    }
}

void newRound(){
    menu();
    computerSelection();
    playerSelection();
}

void roundDeterminer(){
    if(computerChoice == 0 && playerChoice == 0){
        printf("\n Streak: %d", streak);
        printf("\n Draw");
    }else if(computerChoice == 1 && playerChoice == 1){
        printf("\n Streak: %d", streak);
        printf("\n Draw");
    }else if(computerChoice == 2 && playerChoice == 2){
        printf("\n Streak: %d", streak);
        printf("\n Draw");
    }else if(computerChoice == 0 && playerChoice == 1){
        streak++;
        printf("\n Streak: %d", streak);
        printf("\n YOU WIN!");
    }else if(computerChoice == 0 && playerChoice == 2){
        streak--;
        printf("\n Streak: %d", streak);
        printf("\n You lose");
    }else if(computerChoice == 1 && playerChoice == 0){
        streak--;
        printf("\n Streak: %d", streak);
        printf("\n You lose");
    }else if(computerChoice == 1 && playerChoice == 2){
        streak++;
        printf("\n Streak: %d", streak);
        printf("\n YOU WIN!");
    }else if(computerChoice == 2 && playerChoice == 0){
        streak++;
        printf("\n Streak: %d", streak);
        printf("\n YOU WIN!");
    }else if(computerChoice == 2 && playerChoice == 1){
        streak--;
        printf("\n Streak: %d", streak);
        printf("\n You lose");
    }else{
        printf("\n error");
    }
}


int main(){
    newRound();// Round 1
    roundDeterminer();
    newRound();// Round 2
    roundDeterminer();
    newRound(); // Round 3
    roundDeterminer();
    newRound();// Round 4
    roundDeterminer();
    newRound();// Round 5
    roundDeterminer();
    newRound();// Round 6
    roundDeterminer();
    newRound(); // Round 7
    roundDeterminer();
    newRound();// Round 8
    roundDeterminer();
    newRound();// Round 9
    roundDeterminer();
    newRound(); // Round 10
    roundDeterminer();
    return 0;
}

