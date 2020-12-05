#include<stdio.h>

int main()
{
	int a=100;
	int b=200;
	int result =0;
	
	result=a==b;
	printf("a==b 結果%d \n",result);
	result=a!=b;
	printf("a!=b 結果%d \n",result);
	result=a>b;
	printf("a>b 結果%d \n",result);
	result=a<b;
	printf("a<b 結果%d \n",result);
	result=a>=b;
	printf("a>=b 結果%d \n",result);
	result=a<=b;
	printf("a<=b 結果%d \n",result);
	a+=100;
	result=a>=b;
	printf("a+100,a>=b 結果%d \n",result);
	return 0;
}
