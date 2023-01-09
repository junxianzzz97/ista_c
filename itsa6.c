#include<stdio.h>

int main()
{
	int input=0;
	
	scanf("%d",&input);
	switch(input/3)//取商數為區分點 
	{
		case 1:printf("Spring\n");break;//商數為1，(3,4,5) 
		case 2:printf("Summer\n");break;//商數為2，(6,7,8)
		case 3:printf("Autumn\n");break;//商數為3，(9,10,11)
		default :printf("Winter\n");//其餘(12(商數為4),1,2)皆為冬季 
	} 
	
	return 0;
} 