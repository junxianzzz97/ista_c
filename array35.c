#include <stdio.h>
#define ROW 12
#define COL 10
int count (int x)
{
    if(x<=2008 && (2008-x)%12==0)
        return 0;
    else if(x>2008)
        return (x-2008)%12;
    else
        return 12-(2008-x)%12;
}

int main()
{
    char zodic[ROW][COL]= {"rat","ox","tiger","rabbit","dragon","snake","horse","sheep","monkey","rooster","dog","pig"};
    int n,i=0,flag=1;
    scanf("%d",&n);
    while(flag==1)
    {
        if(zodic[count(n)][i]=='\0')
            flag=0; //break;
        else
            printf("%c",zodic[count(n)][i++]);
    }
    printf("\n");
    
    return 0;
}