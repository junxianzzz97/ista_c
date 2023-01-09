#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int result[26]= {0}; //歸零
    char a[200];
    int i,temp;
    scanf("%[^\n]",&a);//輸入字串 包括空白後 若寫 scanf("%s",&a) ex: Hi ya!! 則只會讀取 Hi;
    for(i=0; a[i]!= '\0'; i++) //判斷字串是否達到結尾'\0'
    {

        if(a[i]>='A' && a[i]<='Z')  //'A'=65 判斷大寫
        {
            temp = a[i]-'A';
            //printf("%d ",a[i]-'A');
            result[temp]++; //將對應位置+1
        }
        if(a[i]>='a' && a[i]<='z')  //判斷小寫
        {
            temp = a[i]-'a'; //計算與a相距多少索引值;
            // printf("%d ",a[i]-'a');
            result[temp]++;
        }
    }

    for(i=0; i<26; i++)
    {
        if(i==0)
            printf("%d",result[i]); //若第一個數 不印出一個空格
        else
            printf(" %d",result[i]); //其餘則在前印出空白(後面不印),以免最後一個多出一個空格
    }
    printf("\n");
    return 0;
}