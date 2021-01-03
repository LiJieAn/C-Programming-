#include<stdio.h>

int main()
{
	int v1=100;
	int x[2];
	x[0]=v1;
	printf("設定第二個陣列元素值:");
	scanf("%d",&x[1]);
	printf("x[0]:%d,x[1]:%d \n",x[0],x[1]);
	return 0;
 } 
