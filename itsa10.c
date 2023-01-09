#include <stdio.h>

void main()
{
 int a,b,r;
 do  
     scanf("%d%d",&a,&b);
 while(a<=0||b<=0);      /*确保a和b为正整数*/
 r=a%b;
 while(r!=0)
  {
    a=b;
    b=r;
    r=a%b;
  }
 printf("%d\n",b);
}  