#include<stdio.h>  
int main()  
{  
    int a=0,b=0,c=0;  
    scanf("%d",&a);   
    c=a;  
    while(a!=0){  
        b=b*10+a%10;  
        a=a/10;  
    }   
    if(c==b){  
        printf("YES\n");  
    }else{  
        printf("NO\n");  
    }  
      
    return 0;  
}