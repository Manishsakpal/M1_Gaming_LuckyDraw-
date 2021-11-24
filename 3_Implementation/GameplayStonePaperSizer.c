#include <Gameplay.h> 
#include <stdlib.h> 
#include <time.h> 
//will be saved in .c format==>GameplayStonePaperSizer.c
void PlayGameForStonePaperSizer(Chances)
{
  srand(time(NULL));
  mynum = rand() % 3; 
  if (mynum==0)
  {
    CompSPX="S";
  }
  if (mynum==1)
  {
    CompSPX="P";
  }
  if (mynum==2)
  {
    CompSPX="X";
  }
  for(int x=0;x<Chances;x++)
  {
    print("Enter the Stone-S paper-P sizer-S");
    scanf("%dl",&UserSPX);
    if (UserSPX==CompSPX)
    {
      x--;
      print("Ohh it's a tie try again ");
    }
    
    if (UserSPX=="S" && CompSPX=="P")
    {  
     printf("You Loss better luck next time  \n");
     break; 
    } 
    if (UserSPX=="S" && CompSPX=="X")
    {  
     printf("Congrulation you won %d  \n",(Chances/5)*5);
     break; 
    }
    if (UserSPX=="P" && CompSPX=="S")
    {
      printf("Congrulation you won %d  \n",(Chances/5)*5); 
    }
    if (UserSPX=="P" && CompSPX=="X")
    {
      printf("You Loss better luck next time\n"); 
    }
    if (UserSPX=="X" && CompSPX=="P")
    {
      printf("Congrulation you won %d  \n",(Chances/5)*5); 
    } 
    if (UserSPX=="X" && CompSPX=="S")
    {
      printf("You Loss better luck next time\n"); 
    } 
  }
}
