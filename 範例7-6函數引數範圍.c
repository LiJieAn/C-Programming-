#include<stdio.h>

void dox(int a);
int main()
{
	int i=100;
	dox(i);/*呼叫dox()並傳入i*/ 
	printf("i:%d \n",i);
	/*printf("%d \n",a);→a是dox()函數的引數 代表是dox()的區域變數 在範圍外存取並不合法*/
	return 0;
	
 } 
void dox(int a)
{
	printf("a:%d \n",a);
}
 
