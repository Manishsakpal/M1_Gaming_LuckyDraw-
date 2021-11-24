#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
//will be saved in .h format==>Gameplay.h
void PlayGameForStonePaperSizer()
void PlayGameForGuessGame()
int main() 
{ 
  int mynum, usernum,Chances;
  char GameSelector,UserSPX,CompSPX;
  srand(time(NULL)); 
  print("Games rules you should should play for at least 5rs game \n for one single chance for 2 chances should play for 10rs  \nand further respectively Chances=Money_Enroll/5");
  printf("Enter your playing amount here for enroll:  ");
  scanf("%d",&Chances/5);
  bool Want_to_play=true;
  mynum = rand() % 5*Chances; 
  printf("I have a number in mind (0 -%d ). can you Gues it and it is ?\n,mynum=",(Chances/5)*5); 
  while (Want_to_play) 
  { 
    printf("Here we have two games\n1)Guess game is which have to guess the number from 0 -%d will get multiple number of chance and money X5XChances\n2)Is a Stone Paper Sizer game between computer and you will get multiple chance and money X3",(Chances/5)*5);
    printf("Enter the game you want to play \n"G" for guess game \n "SPX" for stone paaper sizer :  "); 
    scanf("%dl",&GameSelector);
    if (GameSelector.toupper()=="G");
    {
      PlayGameForGuessGame(Chances);
    }
    else if (GameSelector.toupper()=="SPX");
    {
      PlayGameForStonePaperSizer(Chances);
    }
    else 
    {
      Print("Invalid game entry\n ");
    } 
  } 
  return 0; 
} 
