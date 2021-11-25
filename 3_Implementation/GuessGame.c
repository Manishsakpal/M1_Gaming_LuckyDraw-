#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void guess(int N)
{
	int number, guess, numberofguess = 1;

	// Generate a random number
	number = rand() % N;

	printf("\n\t\t\t\tGuess a number between"
		" 1 and %d\n",
		N);

	// Using a do-while loop that will
	// work until user guesses
	// the correct number
	do {
        printf("\t\t\t\tYou have total number %d remaining:- ",(N/5)+1-numberofguess);
		if (numberofguess > N/5) {
			printf("\n\t\t\t\tYou Loose! the number was %d\n",number);
			break;
		}

		// Input by user
		scanf("\n%d", &guess);

		// When user guesses lower
		// than actual number
		if (guess > number)

		{
			printf("\t\t\t\tLower number "
				"please!\n");
			numberofguess++;
		}

		// When user guesses higher
		// than actual number
		else if (number > guess)

		{
			printf("\t\t\t\tHigher number"
				" please!\n");
			numberofguess++;
		}

		// Printing number of times
		// user has taken to guess
		// the number
		else
			printf("\t\t\t\t--------------------------------------\n\t\t\t\tYou guessed the"
				" number in %d "
				"attempts!\n\t\t\t\tso you have win %drs Congrulations\n\t\t\t\t--------------------------------------\n",
				numberofguess,5*N/numberofguess);

	} while (guess != number);
}
