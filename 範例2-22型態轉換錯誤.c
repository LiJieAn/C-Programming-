#include<stdio.h>

int main()
{
	int x=32767+1;
	short s=(short)x;/*short �u��ƫ��A -32768~32767*/
	printf("x:%d \n",x);
	printf("s:%d \n",s);/*�]32768�W�Lshort���̤j���\�d�� s�����ܦ�-32768 ���ͤ���]�ȷ���*/ 
	return 0;
 } 
