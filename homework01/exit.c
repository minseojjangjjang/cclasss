#include<stdio.h>
#include "screen.h"
                int end() 
                    
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
                                screen[b]='D';
                        }
                        else if(a==8&&b==11)
                        {
                                screen[b]='O';
                        }
                        else if(a==8&&b==13)
                        {
                                screen[b]='Y';
                        }
                        else if(a==8&&b==14)
                        {
                                screen[b]='O';
                        }
                        else if(a==8&&b==15)
                        {
                                screen[b]='U';
                        }
                        else if(a==9&&b==6)
                        {
                                screen[b]='W';
                        }
                        else if(a==9&&b==7)
                        {
                                screen[b]='A';
                        }
                        else if(a==9&&b==8)
                        {
                                screen[b]='N';
                        }
                        else if(a==9&&b==9)
                        {
                                screen[b]='N';
                        }
                        else if(a==9&&b==10)
                        {
                                screen[b]='A';
                        }
                        else if(a==9&&b==12)
                        {
                                screen[b]='E';
                        }
                        else if(a==9&&b==13)
                        {
                                screen[b]='X';
                        }
                        else if(a==9&&b==14)
                        {
                                screen[b]='I';
                        }
                        else if(a==9&&b==15)
                        {
                                screen[b]='T';
                        }else if(a==9&&b==16)
                        {
                                screen[b]='?';
                        }
                        else if(a==11&&b==6)
                        {
                                screen[b]='1';
                        }
                        else if(a==11&&b==7)
                        {
                                screen[b]='.';
                        }
                        else if(a==11&&b==8)
                        {
                                screen[b]='Y';
                        }
                        else if(a==11&&b==9)
                        {
                                screen[b]='E';
                        }
                         else if(a==11&&b==10)
                        {
                                screen[b]='S';
                        }
                        else if(a==12&&b==6)
                        {
                                screen[b]='2';
                        }
                        else if(a==12&&b==7)
                        {
                                screen[b]='.';
                        }
                        else if(a==12&&b==8)
                        {
                                screen[b]='N';
                        }
                        else if(a==12&&b==9)
                        {
                                screen[b]='O';
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