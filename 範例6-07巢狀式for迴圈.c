#include<stdio.h>

int main()
{
	int i, j;
	int count=0;
	int counti=0;
	for(i=1;i<=10;i++)
	{
		count++;
		for(j=1;j<=100;j++)
		{
			counti++;
		}
		
	}
	printf("�~���j�馸��:%d \n",count);
	printf("�����j�馸��:%d \n",counti);
	return 0;
}
/*�_����for�j��
��b�C�@���j�餤 �A����@���j��@�~��
�y�k
for(�p�ƪ�l��;�j��P�_��;���ܭp��)
{
	for(�p�ƪ�l��;�j��P�_��;���ܭp��)
	{
		statement;	
	}
}
�_���j�骺����for�j�� �|�b�C�@���~��for�j��i�J����� ���s���㪺����@��
�~���j��C����@�� �����j�饲���������@��  
�������j����榸��=����������+ ���H �~���j�骺����*/ 
