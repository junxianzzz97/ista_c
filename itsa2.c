#include <stdio.h>
#include <stdlib.h>
int main(){

    float a,d;
    int x;
    while(scanf("%f",&a)==1){
        x=a*1.6;
        d=a*1.6;

        if(x<d){
            printf("%g\n",d);
        }

        else{
            printf("%.1f\n",d);
        }
    }
    return 0;
}