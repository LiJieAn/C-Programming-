#include<stdio.h>

int main()
{
	int a=100;
	int b=200;
	char c=a>b? 'T':'F';
	printf("a>b:%c \n",c);
	return 0;
 } 


/*
���󦡹B��l ?: �ݭn���ѤT�ӹB�⤸(�T���B��l) 
result = condition ? value1 : value2
condition ������P�_�� �̫�^�Ǫ��O�@��true/false���G�� �p�G���G��true �Nvalue1�x�s��result �_�h��value2
���󦡹B��l
?: ���T���B��l(if-then-else�����z����²�g) */
