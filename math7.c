#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a,b,c;

while(scanf("%d",&a)!=EOF)
{
    b=pow(a,2);
    c=pow(a,3);
    printf("%d %d %d\n",a,b,c);
}
return 0;
}