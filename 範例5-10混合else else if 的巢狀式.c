#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a==0)
	{
		printf("a�O0");
	}
	else
	{
		if(a%2>0)
			printf("%d�O�_�� \n",a);
		else
		{
			printf("%d�O����\n",a);
		}
	}
	return 0;
}

/*if-else�_���j��
if(expression)
{
	statement-nestA;	
} 
else 
{
	if(pression)
	{
		statement-nestB;
	}
}
 
*/
