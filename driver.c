#include <stdio.h>
#include <stdbool.h>
// take user input to play
// simple two player game
#define DIM 9
// sets up the board
// will implement hashmap
void initialize(char board[DIM][DIM]);
void printboard(char board[DIM][DIM]);
void gameplay(char * current, char digit);
int isDone(char board[DIM][DIM]);
char board[DIM][DIM];
int score[2];
char p1[100], p2[100];

const char sym1 = 'X';
const char sym2 = 'O';
// take running input
int main() {
  int x, y, count=1;
  printf("Welcome to a game of tic-tac-toe.\n");
  printf("Player 1 will be represented by X and Player 2 will be represented by O");
  printf("\nEnter the name of Player 1: ");
  scanf("%s", p1);
  printf("Enter the name of Player 2: ");
  scanf("%s", p2);
  printf("The board is labelled as follows:\n\n");
  for(x = 0; x < 3; x++) {
    for(y = 0; y < 3; y++) {
      printf("  %d  ", count);
      count++;
    }
    printf("\n\n");
  }
  initialize(board);
  printboard(board);
  //printf("Player 1, Enter a number 1-9 to place your mark there:");
}
void gameplay(char * current, char digit) {
}

int isDone(char board[DIM][DIM]) {
}


void initialize(char board[DIM][DIM]) {
  int i;
  int j;
  for(i = 0; i < DIM; i++) {
    for(j = 0; j < DIM; j++) {
      if( i < 3 || i > 5 || j < 3 || j > 5) {
	board[i][j] = '%';
      }
      else {
	board[i][j] = ' ';
      }
    }
  }
}

void printboard(char board[DIM][DIM]) {
  int i;
  int j;
  for(i = 0; i < DIM; i++) {
    for(j = 0; j < DIM; j++) {
      printf("%c ", board[i][j]);
    }
    printf("\n");
  }
}


