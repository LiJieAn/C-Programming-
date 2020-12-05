#include<stdio.h>

int main()
{
	int x =100;
	x +=20;
	printf("x等於%d \n",x);
	
	x=100;
	x-=20;
	printf("x等於%d \n",x);
	
	x=100;
	x*=20;
	printf("x等於%d \n",x);
	
	x=100;
	x/=20;
	printf("x等於%d \n",x);
	
	x=100;
	x%=40;
	printf("x等於%d \n",x);
	return 0;
 } 


/*算數運算子和設值運算子合併為複合式運算子
  注意 運算子要連在一起才會成為合法的運算式
ex: x +=10 ;→x變數本身的值加上10*/
