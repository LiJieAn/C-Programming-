#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a==0)
	{
		printf("��J�Ȭ�0\n");
	}
	else if(a%2==0)
	{
		printf("%d������\n",a);
	}
	else if(a%2>0)
	{
		printf("%d���_��\n",a);
	}
	return 0;
 } 

/*if-else if
�䤤��else���s����if�P�_�� ��䤤�B�⬰true �y�{�~�|����else�϶������� 
�_�h���else�϶��������϶����|�Q����
if �Melse if�o��Ӱ϶� �u���@�ӷ|����
�p�Gif�P�_����true ��{��������y�{���ܨ䤤����� �b���槹���ɷ|���X���if-else �~�򩹤U���� �Ӥ��A����else if���P�_ 
if(if�P�_��)
{
	if�϶��{���ԭz; 
}
else if(else if�P�_��)
{
	else if�϶��{���ԭz 
}*/ 
