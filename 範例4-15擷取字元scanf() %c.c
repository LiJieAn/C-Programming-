#include<stdio.h>

int main()
{
	char var;
	scanf("%c",&var);/*&+�ܼ�*//*���w%c�榡�X����ܿ�J���O�@�Ӧr�����A�����*/ 
	printf("��J���r���O%c",var);
	return 0;
	
	 } 

/*�bscanf()�� 
%c �^���Ĥ@�Ӧr�� 
%s �^����q�r��*/ 
/*scanf("%c",&var);�p�G��J�ťզr�� �̵M�|�Q��@�@�몺�r���B�z 
��J���Ĥ@�ӬO�ťզr�� �h���o�ťզr��
�n�קK
���b�榡�X���e�[�@�Ӫť� �N�|�n�Dscanf()�^���Ĥ@�ӹJ��D�ťժ��r��  
*/ 
