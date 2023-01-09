#include <stdio.h>

int main()
{
    int n,n10,n5,n1;
    while(scanf("%d",&n)!=EOF){
        //%表取餘數，而int間相除仍為整數
        n10=n/10;
        n5=(n%10)/5;
        n1=n%5;
        printf("NT10=%d\n",n10);
        printf("NT5=%d\n",n5);
        printf("NT1=%d\n",n1);
    }
    return 0;
}