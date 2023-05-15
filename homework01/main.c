#include<stdio.h>
#include"screen.h"
int main()
{
    title();
    int game_status = 1;
    int input = 0;
    while (game_status)
    {
        scanf("%d",&input);
        if(input==2)
        {
            how();
            while(game_status)
            {
                scanf("%d",&input);
                if (input==1)
                {
                    title();
                    game_status=0;
                }
                else if(input==2)
                {
                    how();
                }
                else
                {
                    game_status=1;
                }
            }
            game_status=1;
            
        }
        if(input==3)
        {
            end();
            scanf("%d",&input);
            if(input==1)
            {
                game_status=0;
            }
            else if(input==2)
            {
                title();
            }

        }
    }
    return 0;
}