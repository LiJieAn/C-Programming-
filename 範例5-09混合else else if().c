#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a>59&&a<=100)
	{
		printf("%d�ή�\n",a); 
	}
	else if(a<60&&a>39)
	{
		printf("%d���ή�A�ɦ� \n",a); 		
	}
	else if(a<40&&a>=0)
	{
		printf("%d���� \n",a); 	
	}
	else
	{
		printf("���ƻݤ���0~100���� \n"); 	
	}
	return 0;
}

/*else elsr if���X�֨ϥ�
�bif�P�_�����t�m�Felse ��ܨ�L��if�P�_�O�����Ѯ� �N��������o�Ӱ϶����{���X �i�����w�]�n���檺�϶�
else�ݰt�m�b�Ҧ�if�ԭz���� �_�h���if�϶��|�X�{���~*/

