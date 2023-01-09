#include<stdio.h>

int main()
{
	int startH=0,startM=0,endH=0,endM=0;
	
	scanf("%d %d",&startH,&startM);//讀入開始時間 
	scanf("%d %d",&endH,&endM);//讀入結束時間
	int time=(endH*60+endM)-(startH*60+startM);//計算總時數 
	if(time<=120&&time>=0) printf("%d\n",time/30*30);//2小時內的費用 
	else if(time>120&&time<=240) printf("%d\n",(time-120)/30*40+120);//4小時內的費用+2小時的費用
	else printf("%d\n",(time-240)/30*60+120+160);//4小時外的費用+4小時的費用+2小時的費用
	
	return 0;
}