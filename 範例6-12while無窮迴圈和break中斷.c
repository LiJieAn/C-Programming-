#include<stdio.h>

int main()
{
	int count=0;
	while(1)/*while�P�_�����D0�ơ��L�a�j��*/
	{
		count++;
		if(count>100)/*�˵�count�O�_�w�g�j��100 �O���ܤޥ�break ���_�j�骺����*/ 
		{
			break;
		}
		/*while�j�餣�_�����count���ȶW�L100 */ 
	}
	printf("count����%d \n",count);
	return 0;
 } 
 /*�j��_�j��
�w�]���p�U ��F���w����~�|�����j�骺����
��ݭn�j��{���y�{���}���`���檺�j���
1.break
�p�P�bswitch�ԭz�����\��
�N��t�m�b�j��϶������w����m �N��F�줤�_�o�ĪG
��{�������break�o�@�ԭz �j��K�|���_ ���X��Ӥj�A��������d��
!!�`�N�]break�|�L�����_�ø��X�j�� �G�q�`�|�f�tif�ԭz�M�w�O�_�n���� �b�Y�Ǳ���ŦX���Ϊp�U �~�|����break�ԭz�Ӥ��_�j��
�y�k
while()
{
	...
	break;//�{���b�����X�j�� 
	
}*/ 
