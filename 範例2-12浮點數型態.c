#include<stdio.h> 

int main()
{
	float f=123.45678f;/*此行的輸出不正確 因為float精確度無法完整輸出到8位數*/
	double d=123.45678;
	printf("float 變數 s=%f \n",f);/*%f：浮點數輸出*/
	printf("double 變數 s=%f \n",d);
	return 0;
}
