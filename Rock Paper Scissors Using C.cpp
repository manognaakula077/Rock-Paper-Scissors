#include<stdio.h>
#include<stdlib.h>
int main()
{
    int usermove,compmove;
    
    int count=0,n,i;

printf("-----LOADING-----\n\n");

printf("INFO:-\t 0 for rock\t 1 for paper \t 2 for scissors \t 9 for exit\n\n");

printf("LET'S BEGIN THE GAME-----\n\n");

printf("\n");

printf("how many times u wanna play:");
scanf("%d",&n);
printf("\n");

for(i=1;i<=n;i++)
{

printf("enter your move:-");
scanf("%d",&usermove);

compmove=rand()%3;

if(usermove==9)
{
    printf("----QUIT THE GAME----");
     exit(1);
}

else if(usermove==0 && compmove==1)
{
    printf("The mighty computer has defeated you ---- paper beats rock\n");
    count--;
}

else if(usermove==0 && compmove==2)
{
    printf("You have defeated the computer ---- rock beats scissors\n");
    count++;
}

else if(usermove==1 && compmove==0)
{
    printf("You have defeated the computer ---- paper beats rock\n");
    count++;
}

else if(usermove==1 && compmove==2)
{
    printf("The mighty computer has defeated you ---- scissors beats paper\n");
    count--;
}

else if(usermove==2 && compmove==0)
{
    printf("The mighty computer has defeated you ---- rock beats scissors\n");
    count++;
}

else if(usermove==2 && compmove==1)
{
    printf("You have defeated the computer ---- scissors beats paper\n");
    count++;
}

else
{
    printf("SHOOT-----ITS A DRAW-----\n");
}

printf("\n");
}

if(count>0)
{
    printf("YOU WON THE GAME!");
}

else if(count<0)
{
    printf("YOU LOST THE GAME");
}
else
{
    printf("-----ITS A DRAW -----");
    
    
    
}



return 0;
}












