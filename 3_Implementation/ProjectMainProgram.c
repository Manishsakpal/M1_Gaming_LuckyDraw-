// C program for the above approach
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GuessGame.c"
#include "SPZPro.c"

// Function that generate a number in
// the range [1, N] and checks if the
// generated number is the same as the
// guessed number or not


// Driver Code
int main()
{
    int N;
    char UserIO[55];
    printf("\n\n\n\n\t\t\t\tEnter the amount of money want to play for in number's:- ");
	scanf("%d",&N);
    printf("\n\n\t\t\t\tEnter G or SPZ :- ");
    scanf("%s", UserIO);
    // Output the Character
	// Function call
    if(strlen(UserIO)==3)
     guessSPZ(N);
    if(strlen(UserIO)==1)
     guess(N);
    //
   //
}
