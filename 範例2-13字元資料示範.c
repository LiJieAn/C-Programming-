#include<stdio.h>

int main()
{
	char c1='Z';/*�r���H��޸����*/
	char c2='Y';
	printf("char �ܼ�c1=%c  \n",c1);/*�ŧichar���A���ܼ� �ñN��@�r���������L*/ 
	printf("char �ܼ�c2=%c  \n",c2);/*��X�榡%c*/
	return 0;
	
 } 


/*�r������ƫ��A����� BUT�r���Q�ΨӳB�z��r �G�W�߰Q��*/
/**/ 
/*char����ܳ�@�r�� �C�@�Ӧr������@�줸�ժ��Ŷ� */ 
/*��n�]�w�@�Ӧr���� ���H'��޸�' ���*/
/*char c1 = 'z'; �ŧi�@��char���A�ܼ�c1 �H��޸��ئ���Ȫ���@�r��z*/

/*�P��r������1.�r�� 2.�r��*
�@�Ӧr��O�ƭӦr�����զX ���H���޸�"" ���
EX:"kangting" printf����X���G�T�����O�r�� �H���޸��]�q 
*/ 
