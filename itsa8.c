
#include<stdio.h>

int isPrime(int n);
int main()
{
    int n;
    scanf("%d", &n);
    if(isPrime(n))
    {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
int isPrime(int n)
{
    if(n==1)
        return 0;
    int i=2;
    for(; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}