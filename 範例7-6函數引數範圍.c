#include<stdio.h>

void dox(int a);
int main()
{
	int i=100;
	dox(i);/*�I�sdox()�öǤJi*/ 
	printf("i:%d \n",i);
	/*printf("%d \n",a);��a�Odox()��ƪ��޼� �N��Odox()���ϰ��ܼ� �b�d��~�s���ä��X�k*/
	return 0;
	
 } 
void dox(int a)
{
	printf("a:%d \n",a);
}
 
