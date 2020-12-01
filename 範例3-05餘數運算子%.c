/*%餘數運算子→對兩個運算元進行除法運算 取得其餘數回傳*/ 

#include<stdio.h>


int main()
{
	int a,b,c,v1,v2;
	a=10;
	b=4;
	c=2;
	v1=a%b;
	v2=a%c;
	printf("a/b的餘數:%d \n",v1);
	printf("a/c的餘數:%d \n",v2);
	return 0; 
}
