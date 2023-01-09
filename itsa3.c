#include<stdio.h>

int main()
{
	int inputx=0,inputy=0;
	while(scanf("%s %s",&inputx,&inputy)!=EOF)//依序讀入X，Y值 
	{
		if(inputx*inputx+inputy*inputy <= 10000) printf("inside\n");
		//若X平方+Y平方小於半徑(100)的平方，輸出"inside" 
		else printf("outside\n");
	}
	
	return 0;
}