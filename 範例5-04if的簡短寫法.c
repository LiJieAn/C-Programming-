#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a%2>0)
		printf("a����%d�O�_�� \n",a);
	if(a%2==0)
		printf("a����%d�O���� \n",a);
	return 0;
}
/*if�ԭz���@�w�ݭn�j�A���Ӭɩw�ҭn���檺�{���϶�
 �Y�j�A�����u���@��{���ԭz �i�ٲ��j�A�� �����g�U�o�@��{���X 
 �S���Хܤj�A�����u���򱵵�if�U�誺�Ĥ@��{���X�|���� 
 �|�z�L�Y�ƨөM��L�{���X���Ϲj
 if�P�_���Mstatement�i�X�֦��@��  
  
 if(�P�_��)
 	statement;
 statement2; 
 
 if(�P�_��) statement; 
 
 */ 
