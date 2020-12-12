#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a==0)
	{
		printf("a是0");
	}
	else
	{
		if(a%2>0)
			printf("%d是奇數 \n",a);
		else
		{
			printf("%d是偶數\n",a);
		}
	}
	return 0;
}

/*if-else巢狀迴圈
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
