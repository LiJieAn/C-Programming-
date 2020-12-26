#include<stdio.h>

int dofac(int n);
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
	int result=1;
	int i;
	for(i=1;i<n+1;i++)
	{
		result*=i;
	}
	return result;
}
