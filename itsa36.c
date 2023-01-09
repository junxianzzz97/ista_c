#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b,c=0;
scanf("%d",&a);
if(a>=1000)
{
    if(a%4==0 & a%100!=0)
    {
        printf("Bissextile Year\n");
    }
    else if(a%400==0)
    {
        printf("Bissextile Year\n");
    }
    else
        {
        printf("Common Year\n");
        }
}
    return 0;
}