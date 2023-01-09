#include <stdio.h>

unsigned long long intPower(int m,int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return m;
    else
        return (m*intPower(m,n-1));
}

int main()
{
    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF)
        printf("%ld\n",intPower(m,n));

    return 0;
}