/*
Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows:
    - There are 21 matchsticks.
    - The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
    - After the person picks, the computer does its picking.
    - Whoever is forced to pick up the last matchstick loses the game.
*/ 
#include <stdio.h>
int input(int * pick)
{
    printf("pick 1,2,3,or 4 matchstick ");
    if(scanf("%d",pick)==1 )
    /*important thing to not is that this function
    cannot be used a cotinuation after the first validation
    as the last input is stuck in the input buffer
    which scanf will read again and again
    and push you in an infinite loop,
    instead flush the buffer using
          while (getchar() != '\n');
    */

    {
        if(*pick<=4 && *pick>=1)   
        return *pick;
        else
        {
        printf("\n\ninvalid input\n\n");
         return 0;
        }
    }
    else
    {   
         printf("\n\ninvalid input\n\n");
         return 0;
    }
}
int game()
{

    int matches = 21;
    int inp;
    while(matches != 1)
    {
        inp=0;
        inp=input(&inp);
        if(inp!=0)
        {
           
            
            if(inp==1)
            {
                printf("computer chooses 4\n your turn\n");
                matches=matches-5;
                printf("%d matches are left\n",matches);
                continue;
            }
            else if(inp==2)
            {
                printf("computer chooses 3\n your turn\n");
                matches=matches-5;
                printf("%d matches are left\n",matches);
                continue;
            }
            else if(inp==3)
            {
                printf("computer chooses 2\n your turn\n");
                matches=matches-5;
                printf("%d matches are left\n",matches);
                continue;
            }
            else if (inp==4)
            {
                printf("computer chooses 1\n...................................................................\nyour turn\n");
                matches=matches-5;
                printf("%d matches are left\n",matches);
                continue;
            }
        }
        else 
        {
            while (getchar() != '\n');
            continue;
        }
    }
    printf("you have to pick up the last match, you lost");
    return 0;
}

int main()
{
    game();
    return 0;
}