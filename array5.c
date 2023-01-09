#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int start[30]= {0};
    int end[30]= {0};
    int time[25]= {0};
    int i=0,j=0;
    for(i=0; i<n; i++)
        scanf("%d %d",&start[i],&end[i]);
    for(i=0; i<n; i++)
    {
        for(j=start[i]; j<end[i]; j++)
            time[j]++;
    }
    int max=time[0];
    for(i=1; i<24; i++)
    {
        if(time[i]>max)
            max=time[i];
    }
    printf("%d\n",max);
    return 0;
}