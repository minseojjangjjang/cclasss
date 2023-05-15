 #include<stdio.h>
 #include "screen.h"
                int title() 
                    
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
                        else if(a==3&&b==10)
                        {
                                screen[b]='L';
                        }
                        else if(a==3&&b==11)
                        {
                                screen[b]='O';
                        }
                        else if(a==3&&b==12)
                        {
                                screen[b]='V';
                        }
                        else if(a==3&&b==13)
                        {
                                screen[b]='E';
                        }
                        else if(a==4&&b==3)
                        {
                                screen[b]='A';
                        }
                        else if(a==4&&b==4)
                        {
                                screen[b]='B';
                        }
                        else if(a==4&&b==5)
                        {
                                screen[b]='I';
                        }else if(a==4&&b==6)
                        {
                                screen[b]='L';
                        }else if(a==4&&b==7)
                        {
                                screen[b]='I';
                        }
                        else if(a==4&&b==8)
                        {
                                screen[b]='T';
                        }
                        else if(a==4&&b==9)
                        {
                                screen[b]='Y';
                        }
                        else if(a==4&&b==12)
                        {
                                screen[b]='T';
                        }
                        else if(a==4&&b==13)
                        {
                                screen[b]='E';
                        }else if(a==4&&b==14)
                        {
                                screen[b]='S';
                        }
                        else if(a==4&&b==15)
                        {
                                screen[b]='T';
                        }
                        else if(a==7&&b==5)
                        {
                                screen[b]='1';
                        }
                        else if(a==7&&b==6)
                        {
                                screen[b]='.';
                        }
                        else if(a==7&&b==7)
                        {
                                screen[b]='S';
                        }
                        else if(a==7&&b==8)
                        {
                                screen[b]='T';
                        }
                        else if(a==7&&b==9)
                        {
                                screen[b]='A';
                        }
                        else if(a==7&&b==10)
                        {
                                screen[b]='R';
                        }
                        else if(a==7&&b==11)
                        {
                                screen[b]='T';
                        }
                        else if(a==8&&b==5)
                        {
                                screen[b]='2';
                        }
                        else if(a==8&&b==6)
                        {
                                screen[b]='.';
                        }
                        else if(a==8&&b==7)
                        {
                                screen[b]='H';
                        }
                        else if(a==8&&b==8)
                        {
                                screen[b]='O';
                        }
                        else if(a==8&&b==9)
                        {
                                screen[b]='W';
                        }
                        else if(a==8&&b==11)
                        {
                                screen[b]='T';
                        }
                        else if(a==8&&b==12)
                        {
                                screen[b]='O';
                        }
                         else if(a==8&&b==14)
                        {
                                screen[b]='P';
                        }
                         else if(a==8&&b==15)
                        {
                                screen[b]='L';
                        }
                         else if(a==8&&b==16)
                        {
                                screen[b]='A';
                        }
                         else if(a==8&&b==17)
                        {
                                screen[b]='Y';
                        }
                         else if(a==9&&b==5)
                        {
                                screen[b]='3';
                        }
                         else if(a==9&&b==6)
                        {
                                screen[b]='.';
                        }
                         else if(a==9&&b==7)
                        {
                                screen[b]='E';
                        }
                         else if(a==9&&b==8)
                        {
                                screen[b]='X';
                        }
                         else if(a==9&&b==9)
                        {
                                screen[b]='I';
                        }
                         else if(a==9&&b==10)
                        {
                                screen[b]='T';
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