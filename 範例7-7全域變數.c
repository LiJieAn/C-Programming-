#include<stdio.h>

int doadd();
int dosub();
int a=200,b=100;
int main()
{
	int s;
	s=doadd();
	printf("a+b=%d\n",s);
	s=dosub();
	printf("a-b=%d \n",s);
	return 0;
	
 } 
int doadd()
{
	int s=a+b;
	return s;
}
int dosub()
{
	int s=a-b;
	return s;
}
