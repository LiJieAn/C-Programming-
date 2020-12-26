#include<stdio.h>

int dofac(int);
int main()
{
	int i;
	int s;
	printf("請輸入大於3的數:");
	scanf("%d",&i);
	s=dofac(i);
	printf("1x2x3x...x%d=%d",i,s);
	return 0;
 } 
int dofac(int n)
{
	int x=1;
	if(n==0)
		return x;
	else
	{				  /*將n-1的值和n進行乘法運算 直到n-1=0*/
		x=n*dofac(n-1);
		return x;
	}
}
/*不懂*/ 
