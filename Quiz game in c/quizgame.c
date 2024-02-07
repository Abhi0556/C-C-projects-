#include<stdio.h>
#include<stdlib.h>
int display();
int main()
{
  display();
}

int display()
{
    char yes_no;
    int category;
    printf("\n---------Welcome to the quiz game-----------");
    printf("\n ------------------Rules------------------");
    printf("\n1.You will be given one question at a time.");
    printf("\n2.Each question carries 1 point.");
    printf("\n3.In catageory the questions will asked related to your field.");
    printf("\n4.There are Total 3 levels for each category.");
    printf("\n5.You have to enter the correct option from a,b,c,d");
    printf("\n6.The result will be displayed at the end of the level.");
    printf("\n7.To play next level you should score minimum 7 points in each level.");
    printf("\nDo you want start the game (y or n)=");
    scanf("%c",&yes_no);
    if(yes_no=='y' || yes_no=='Y')
    {
    printf("\n----Categories----");
    printf("\n1.General.");
    printf("\n2.Science and Nature.");
    printf("\n3.History and Politices.");
    printf("\n4.Literature and Arts.");
    printf("\n5.Movies and Tv Shows.");
    printf("\n6.Music.");
    printf("\n7.Sports.");
    printf("\n8.Geography.");
    printf("\n9.Technology.");
    printf("\n10.Language and Words.");
    printf("\n Chose Category=");
    scanf("%d",&category);
    }
    else
    {
      if(yes_no=='N'||yes_no=='n')
      {
        printf("\nExited");
        exit(0);
      }
      else{
        printf("\nInvalid input please enter valid character.");
         
      }
    }
}