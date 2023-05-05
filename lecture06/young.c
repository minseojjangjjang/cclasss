#include <stdio.h>
int screen()
{
	printf("#########################################\n");
	printf("##                                     ##\n");
	printf("##                                     ##\n");
	printf("##               Dino RUN              ##\n");
	printf("##                                     ##\n");
	printf("##                                     ##\n");
	printf("##                                     ##\n");
	printf("##                                     ##\n");
	printf("##                                     ##\n");
	printf("##     1. Game Start                   ##\n");
	printf("##     2. How To Play                  ##\n");
	printf("##     3. Exit                         ##\n");	
	printf("##                                     ##\n");
	printf("##                                     ##\n");
	printf("#########################################\n");

	return 0;
}
int explain()
{	
	printf("#########################################\n");
	printf("##                                     ##\n");
	printf("##      When an enemy comes,           ##\n");
	printf("##      press the space bar            ##\n");
	printf("##      to avoid it.                   ##\n");
	printf("##                                     ##\n");
	printf("##                                     ##\n");
	printf("##                                     ##\n");
	printf("##                                     ##\n");
	printf("##     Return to menu?                 ##\n");
	printf("##     1. yes                          ##\n");
	printf("##     2. no                           ##\n");
	printf("##                                     ##\n");
	printf("##                                     ##\n");
	printf("#########################################\n");

	return 0;
}
int main()
{
	screen();
		
	int game_state = 1;
	int input = 0;
	
	while(game_state)
	{
		printf("input(1~3)>");
		scanf("%d", &input);
		if(input==2)
		{
			explain();
			
			while(game_state)
			{
				printf("input(1~2)>");
				scanf("%d",&input);
				if(input==1)
				{
					screen();
					game_state = 0;
				}
				else if(input==2)
				{
					explain();
				}
				else
				{
					printf("Please enter again ");
				}
			}
			
			game_state = 1;
		}

		if (input==3)
		{
			game_state = 0;
		}

	}
	
	return 0;
}


