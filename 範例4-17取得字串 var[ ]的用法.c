#include<stdio.h>

int main()
{
	char var[10];/*����char�}�C ���� �ȱN���@�Ψ��x�s�S�w�ƶq���ۦP���A��Ʈe���Y�i
	             var[10]����ܤ@�ӥi�H�@���x�s10�Ӧr����char���A�e��*/
	scanf("%s",&var) ;
	printf("%s",var);/*�i�H�@�����X�Q�Ӧr���Ҳզ����r��*/ 
	return 0;
                  
}

/*�r����@�s��r�����զX
�p�G�n�^���ۦ� ���N�榡�X���w��%s*/ 
/*�b��J�r��� �Ҧ��r���������i���ť� scanf()�J�ťշ|�������} 
�ϥ�%s�ɳ̦n���T�ŧichar���A�ܼƪ����� 
���ޫŧi�p��ҭn���o���r�������ܼ� ���ɨ̵M�i�H���o���G ���i��o�ͫD�w�������G*/ 
