#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a%2==0)
	{
		if(a==0)
		{
			printf("��J��%d�O0\n",a);	
		}
		if(a!=0)
		{
			printf("��J��%d�O����\n",a);			
		}
	}
	return 0;
 } 

/*�_����if�϶�
 if(�~��if�P�_��)
 {
 	if(����if�P�_��)
 	{
		����if�{���X�϶�; 
		... 
	}
 }
 �~�hif���P�_���p�G�Otrue�|�i�J����if�϶� 
  �i�@�����椺��if�P�_�� �A�M�w�O�_���椺��if�϶������{���X
 ����if�϶����槹���� �|�~�����~��if�϶��ѤU���{���X ������if�϶�����*/ 
