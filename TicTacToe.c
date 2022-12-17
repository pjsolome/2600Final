#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Globals
char gamePieces[3][3];
bool winCondition = false;

// Makes all spaces on the board empty
int blankPieces() {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            gamePieces[i][j] = ' ';
        }
    }
    return EXIT_SUCCESS;
}

// Print the current board
int printBoard() {
    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", gamePieces[0][0], gamePieces[0][1], gamePieces[0][2]);
    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", gamePieces[1][0], gamePieces[1][1], gamePieces[1][2]);
    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", gamePieces[2][0], gamePieces[2][1], gamePieces[2][2]);
    printf("+-----------+\n");
    return EXIT_SUCCESS;
}

// Check for 3 in a row in a row, column, or diagonal
int checkWinCondition() {
    if(gamePieces[0][0] == gamePieces[0][1] && gamePieces[0][1] == gamePieces[0][2] && gamePieces [0][0] != ' ') {
        winCondition = true;
    } else if(gamePieces[1][0] == gamePieces[1][1] && gamePieces[1][1] == gamePieces[1][2] && gamePieces [1][0] != ' ') {
        winCondition = true;
    } else if(gamePieces[2][0] == gamePieces[2][1] && gamePieces[2][1] == gamePieces[2][2] && gamePieces [2][0] != ' ') {
        winCondition = true;
    } else if(gamePieces[0][0] == gamePieces[1][0] && gamePieces[1][0] == gamePieces[2][0] && gamePieces [0][0] != ' ') {
        winCondition = true;
    } else if(gamePieces[0][1] == gamePieces[1][1] && gamePieces[1][1] == gamePieces[2][1] && gamePieces [0][1] != ' ') {
        winCondition = true;
    } else if(gamePieces[0][2] == gamePieces[1][2] && gamePieces[1][2] == gamePieces[2][2] && gamePieces [0][2] != ' ') {
        winCondition = true;
    } else if(gamePieces[0][0] == gamePieces[1][1] && gamePieces[1][1] == gamePieces[2][2] && gamePieces [0][0] != ' ') {
        winCondition = true;
    } else if(gamePieces[0][2] == gamePieces[1][1] && gamePieces[1][1] == gamePieces[2][0] && gamePieces [0][2] != ' ') {
        winCondition = true;
    } else {
        winCondition = false;
    }
    return EXIT_SUCCESS;
}

int main() {
    int playerTurn = 1;
    int space;

    blankSpaces();
    do {
        checkWinCondition();
        space = -1;
        printf("Pick a space on the board 1-9: \n");
        fflush(stdout);
        scanf("%d", &space);

        if(space == 1 && gamePieces[0][0] == ' ') {
            gamePieces[0][0] = 'O';
            playerTurn = 1;
        } else if(space == 2 && gamePieces[0][1] == ' ') {
            gamePieces[0][1] = 'O';
            playerTurn = 1;
        } else if(space == 3 && gamePieces[0][2] == ' ') {
            gamePieces[0][2] = 'O';
            playerTurn = 1;
        } else if(space == 4 && gamePieces[1][0] == ' ') {
            gamePieces[1][0] = 'O';
            playerTurn = 1;
        } else if(space == 5 && gamePieces[1][1] == ' ') {
            gamePieces[1][1] = 'O';
            playerTurn = 1;
        } else if(space == 6 && gamePieces[1][2] == ' ') {
            gamePieces[1][2] = 'O';
            playerTurn = 1;
        } else if(space == 7 && gamePieces[2][0] == ' ') {
            gamePieces[2][0] = 'O';
            playerTurn = 1;
        } else if(space == 8 && gamePieces[2][1] == ' ') {
            gamePieces[2][1] = 'O';
            playerTurn = 1;
        } else if(space == 9 && gamePieces[2][2] == ' ') {
            gamePieces[2][2] = 'O';
            playerTurn = 1;
        } else {
            printf("Pick an empty space\n");
        }
    } while(playerTurn == 2 && winCondition == false);
}