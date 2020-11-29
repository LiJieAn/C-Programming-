#include<stdio.h>

int main()
{
	int x=32767+1;
	short s=(short)x;/*short 短整數型態 -32768~32767*/
	printf("x:%d \n",x);
	printf("s:%d \n",s);/*因32768超過short的最大允許範圍 s的值變成-32768 產生不當設值溢位*/ 
	return 0;
 } 
