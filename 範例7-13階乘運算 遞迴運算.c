#include<stdio.h>

int dofac(int);
int main()
{
	int i;
	int s;
	printf("�п�J�j��3����:");
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
	{				  /*�Nn-1���ȩMn�i�歼�k�B�� ����n-1=0*/
		x=n*dofac(n-1);
		return x;
	}
}
/*����*/ 
