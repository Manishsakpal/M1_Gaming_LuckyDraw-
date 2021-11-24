#include <Gameplay.h> 
//will be saved in .c format==>Gameplay.c
void PlayGameForGuessGame(Chances)
{
  for(int x=0;x<Chances;x++)
  {
    print("Enter the number wou want to guess");
    scanf("%d",&usernum);
  if (mynum == usernum)
  {  
    printf("Congrulation you won %d\n",(Chances/5)*5); 
    break; 
  } 
  else 
  {
    printf("You Loss better luck next time\n", usernum);
  }
  }
}
