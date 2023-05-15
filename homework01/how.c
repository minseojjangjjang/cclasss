            #include<stdio.h>
            #include "screen.h"
                int how()
                    
                {
	            char screen[1000];
	            int a = 0;
	            while(a<15)
	            {   
		            int b = 0;
		                while(b<30)
		                {   
			            if(a==0||a==14)
			            {
				        screen[b]='*';
			            }
                        else if(b==0||b==29)
			            {
				            screen[b]='*';
			            }
                        else if(a==8&&b==10)
                        {
                                screen[b]='n';
                        }
                        else if(a==8&&b==11)
                        {
                                screen[b]='u';
                        }
                        else if(a==8&&b==12)
                        {
                                screen[b]='m';
                        }
                        else if(a==8&&b==13)
                        {
                                screen[b]='b';
                        }
                        else if(a==8&&b==14)
                        {
                                screen[b]='e';
                        }
                        else if(a==8&&b==15)
                        {
                                screen[b]='r';
                        }

                        else if(a==9&&b==3)
                        {
                                screen[b]='t';
                        }
                        else if(a==9&&b==4)
                        {
                                screen[b]='o';
                        }
                        else if(a==9&&b==6)
                        {
                                screen[b]='g';
                        }else if(a==9&&b==7)
                        {
                                screen[b]='u';
                        }else if(a==9&&b==8)
                        {
                                screen[b]='e';
                        }
                        else if(a==9&&b==9)
                        {
                                screen[b]='s';
                        }
                        else if(a==9&&b==10)
                        {
                                screen[b]='s';
                        }
                        else if(a==9&&b==12)
                        {
                                screen[b]='t';
                        }
                        else if(a==9&&b==13)
                        {
                                screen[b]='h';
                        }else if(a==9&&b==14)
                        {
                                screen[b]='e';
                        }
                        else if(a==9&&b==16)
                        {
                                screen[b]='a';
                        }
                        else if(a==9&&b==17)
                        {
                                screen[b]='n';
                        }
                        else if(a==9&&b==18)
                        {
                                screen[b]='s';
                        }
                        else if(a==9&&b==19)
                        {
                                screen[b]='w';
                        }
                        else if(a==9&&b==20)
                        {
                                screen[b]='e';
                        }
                        else if(a==9&&b==21)
                        {
                                screen[b]='r';
                        }
                        else if(a==9&&b==22)
                        {
                                screen[b]='.';
                        }
                        else if(a==13&&b==6)
                        {
                                screen[b]='r';
                        }
                        else if(a==13&&b==7)
                        {
                                screen[b]='e';
                        }
                        else if(a==13&&b==8)
                        {
                                screen[b]='t';
                        }
                        else if(a==13&&b==9)
                        {
                                screen[b]='u';
                        }
                         else if(a==13&&b==10)
                        {
                                screen[b]='r';
                        }
                        else if(a==13&&b==11)
                        {
                                screen[b]='n';
                        }
                        else if(a==13&&b==13)
                        {
                                screen[b]='t';
                        }
                        else if(a==13&&b==14)
                        {
                                screen[b]='o';
                        }
                        else if(a==13&&b==16)
                        {
                                screen[b]='m';
                        }
                        else if(a==13&&b==17)
                        {
                                screen[b]='e';
                        }
                         else if(a==13&&b==18)
                        {
                                screen[b]='n';
                        }
                        else if(a==13&&b==19)
                        {
                                screen[b]='u';
                        }

                        else
                        {
                        screen[b]=' ';
                                }
                        b+=1;
                                }
                screen[30]='\n';
                printf("%s",screen);
                        a+=1;
                }

            
         return 0;
}