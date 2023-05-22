#include "screen.h"
#include <stdio.h>

int title(char* screen, int width, int height)
{
    int w = 0;
    int h = 0;
    while (h < height)
    {
        while (w < width)
        {
            if(w == width - 1)
            {
                screen[w +(h * (width))] = '\n';
            }
            else
            {
                if(w == 0 || w == width - 2 || h == 0 || h== height -1)
                {
                    screen[w + (h * (width))] = '#';
                }
                else
                {
                    screen[w + (h * (width))] = ' ';
                }
            }
            w = w + 1;
        }
        w = 0;
        h = h + 1;
    }
    screen[height * width] = '\0';
    return 0;
}                        

int writeString(const char* string, char* screen, int width, int x, int y)
{   
    int index = x + (y * width ); // 위치에 해당하는 인덱스 계산
    
    int i = 0;

    while (string[i] != '\0')
    {
        screen[index + i] = string[i];
        i++;
    }
    
    return 0;
}

int setTitle(char* screen, int width, int height)
{   
    int x = width;
    int y = height;

    writeString("LOVE ABILITY", screen, width,14,7);
    writeString("TEST", screen, width, 18, 9);
    writeString("1. Game Start", screen, width,13,12);
    writeString("2. How to play?", screen, width,13,14);
    writeString("3. Exit", screen, width,13,16);   
    return 0;
}

int sethow(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("This game is about", screen, width, 12, 7);
    writeString("choosing a better option", screen, width, 10, 9);
    writeString("Be a dating master!", screen, width, 12, 11);
    writeString("Return to menu?", screen, width, 14, 13);
    writeString("1.Yes", screen, width, 10, 16);
    writeString("2.No", screen, width, 28, 16);
      
    return 0;
}

int setexite(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("Are you sure", screen, width, 13, 7);
    writeString("you're going to finish", screen, width, 11, 9);
    writeString("the game?", screen, width, 15, 11);
    writeString("real hwak sil hae?", screen, width, 10, 13);
    writeString("1.Yes", screen, width, 13, 18);
    writeString("2.No", screen, width, 25, 18);     
    return 0;
}
