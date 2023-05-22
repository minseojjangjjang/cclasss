#include <stdio.h>
#include "screen.h"
#include <stdlib.h>

int main()
{
    char screen[45*25+1];
    int width = 45;
    int height = 25;
    int game_state = 1;

    char input;
    title(screen, width, height);
    setTitle(screen,width,height);
    system("cls");

    while(game_state)
    {
        printf("%s\nPlease enter your number: ", screen);
        scanf(" %c", &input);

        if(input == '2')
        {
            system("cls");
            title(screen, width, height);
            sethow(screen,width,height);

            printf("%s\nPlease enter your number: ", screen);
            scanf(" %c", &input);
            
            if(input == '1')
            {
                system("cls");
                title(screen, width, height);
                setTitle(screen,width,height);
            }
            else if(input == '2')
            {
                system("cls");
                title(screen, width, height);
                sethow(screen,width,height);
            }
        }
        else if(input == '3')
        {
            system("cls");
            title(screen, width, height);
            setexite(screen,width,height);

            printf("%s\nPlease enter your number: ", screen);
            scanf(" %c", &input);

            if(input == '1')
            {
                game_state = 0;
            }
            else if(input == '2')
            {
                system("cls");
                title(screen, width, height);
                setTitle(screen,width,height);
            }
        }
    }

    return 0;
}
