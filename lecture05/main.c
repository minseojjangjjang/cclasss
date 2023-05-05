#include <stdio.h>

int print_title_screen()
{
	printf("#####################################\n");
	printf("##                                 ##\n");
	printf("##             Dino RUN            ##\n");
	printf("##                                 ##\n");
	printf("##                                 ##\n");
	printf("##                                 ##\n");
	printf("##                                 ##\n");
	printf("##    1. Game Start                ##\n");
	printf("##    2. How To Play               ##\n");
	printf("##    3. Exit                      ##\n");
	printf("##                                 ##\n");
	printf("##                                 ##\n");
	printf("#####################################\n");
	printf("input(1~3)>");
	return 0;

}
int print_explanation()
{	
	printf("#####################################\n");
	printf("##                                 ##\n");
	printf("##      When an enemy comes,       ##\n");
	printf("##      press the space bar        ##\n");
	printf("##      to avoid it.               ##\n");
	printf("##                                 ##\n");
	printf("##                                 ##\n");
	printf("##      Return to menu?            ##\n");
	printf("##      1.yes                      ##\n");
	printf("##      2.no                       ##\n");
	printf("##                                 ##\n");
	printf("##                                 ##\n");
	printf("#####################################\n");
	printf("input(1~2)>");
	return 0;
}
int main()
{
	print_title_screen();
	int game_state = 1;
	int input = 0;
	int a =1;
	while(game_state)
	{
		scanf("%d",&input);
		if(input==3)
		{
			game_state=0;
		}
		
		if(input==2)
		{	
			print_explanation();
			game_state=1;
			
		}	
		else if(a==1)
		{
			print_title_screen();
		}
	
	}
	





	return 0;	
}
