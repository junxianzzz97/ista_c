#include <stdlib.h>
#include <stdio.h>
int main()
{
float a;
int b;
while(scanf("%f",&a)!=EOF)
{
b=(int)a;
if(b<a)
{
    printf("%g\n",a*a);
}
else
{
    printf("%.1f\n",a*a);
}
}
return 0;
}