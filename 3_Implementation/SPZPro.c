#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "SPZProFunction.c"

void guessSPZ(int NN)
{
    int Amount_winning=0;
    int runningMul=NN/5;
    while(0<runningMul)
    {
        // Stores the random number
	int n;

	char you, computer, result;

	// Chooses the random number
	// every time

	// Make the random number less
	// than 100, divided it by 100
	n = rand() % 100;

	// Using simple probability 100 is
	// roughly divided among stone,
	// paper, and scissor
	if (n < 33)

		// s is denoting Stone
		computer = 's';

	else if (n > 33 && n < 66)

		// p is denoting Paper
		computer = 'p';

	// z is denoting Scissor
	else
		computer = 'z';

	printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR  \n\t\t\t\tremaining chances are %d ENter you choice:-",runningMul);

	// input from the user
	scanf("\n%c", &you);

	// Function Call to play the game
	result = game(you, computer);

	if (result == -1) {
		printf("\n\n\t\t\t\tGame Draw! you are getting your %drs back\n",NN);
        Amount_winning+=NN;
	}
	else if (result == 1) {
		printf("\n\n\t\t\t\tWow! You have won the game! and you are earning %drs \n",NN*3);
        Amount_winning+=NN*3;
	}
	else {
		printf("\n\n\t\t\t\tOh! You have lost the game better luch next time!\n");
	}
		printf("\t\t\t\tYOu choose : %c and Computer choose : %c\n",you, computer);
    runningMul--;
    }
    printf("\t\t\t\tYou Totally wined is %d",Amount_winning);
}
