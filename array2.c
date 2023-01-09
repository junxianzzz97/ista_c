#include <stdio.h>  
  
  
int main() {  
    // [C_AR02-易] 一維陣列反轉 II  
    int num[6];  
    int mid;  
    for(int i = 0;i < 6;i++)  
    {  
        scanf("%d",&num[i]);  
    }  
    for(int i = 0;i < 3;i++)  
    {  
        mid = num[i];  
        num[i] = num[5-i];  
        num[5-i] = mid;  
    }  
      
    for(int i = 0;i < 6;i++)  
    {  
        if(i != 5)  
        {  
            printf("%d ",num[i]);  
        }  
        else  
        {  
            printf("%d\n",num[i]); 
        }  
          
    }  
    return 0;  
}  