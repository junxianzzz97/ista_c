#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    char a[80];
    scanf("%s",&a);
    int size = 0 ;
    int flag = 1;
    int i ;
    for(i=0; i<80; i++)
    {
        if(a[i]=='\0')
            break;
        size++;
    }
    for(i=0; i<size/2; i++)
    {
        if(a[i] != a[size-1-i])
        {
            printf("NO\n");
            flag =0;
            break;
        }
    }
    if(flag==1)
        printf("YES\n");

    return 0;
}