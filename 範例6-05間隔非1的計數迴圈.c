#include<stdio.h>

int main()
{
	int s=0;
	int i;
	for(i=0;i<=10;i+=2)
	{
		printf("%d",i);/*每一次迴圈將i+2 並輸出*/ 
		s+=i; 
	}
	printf("\n2到10的偶數加總等於%d \n",s);
	return 0;
	
 } 
 /* 看到了迴圈設計的彈性*/ 
