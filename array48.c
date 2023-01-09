#include <stdio.h>

int change (int arr[],int size)
{
    int i;
    for(i=0; i<size; i++)
        arr[i]=(arr[i]+7)%10;
    int temp =arr[0];
    arr[0]=arr[2];
    arr[2]=temp;
    int temp2=arr[1];
    arr[1]=arr[3];
    arr[3]=temp2;
}

int main()
{
    int key [4]= {0};
    int i=0;
    for (i=0; i<4; i++)
        scanf("%1d",&key[i]);
    change(key,4);
    for(i=0; i<4; i++)
        printf("%d",key[i]);
    printf("\n");
    return 0;
}