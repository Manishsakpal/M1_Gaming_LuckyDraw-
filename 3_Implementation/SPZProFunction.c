#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int game(char you, char computer)
{
	// If both the user and computer
	// has chose the same thing
	if (you == computer)
    return -1;

	// If user's choice is stone and
	// computer's choice is paper
	if (you == 's' && computer == 'p')
		return 0;

			// If user's choice is paper and
			// computer's choice is stone
			else if (you == 'p' && computer == 's') return 1;

	// If user's choice is stone and
	// computer's choice is scissor
	if (you == 's' && computer == 'z')
		return 1;

	// If user's choice is scissor and
	// computer's choice is stone
	else if (you == 'z' && computer == 's')
		return 0;

	// If user's choice is paper and
	// computer's choice is scissor
	if (you == 'p' && computer == 'z')
		return 0;

	// If user's choice is scissor and
	// computer's choice is paper
	else if (you == 'z' && computer == 'p')
		return 1;
}
