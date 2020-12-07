#include<stdio.h>

int main()
{
	int var1;
	double var2;
	float var3;
	scanf("%d %lf %f",&var1,&var2,&var3);/*%lf*/
	printf("輸入的數等於%d,%.2f,%.2f \n",var1,var2,var3);
	return 0;
}
/*printf和scanf的使用原理大致相同
不同:
scanf中輸入double型態的數值 要用%lf
           float                %f*/ 
