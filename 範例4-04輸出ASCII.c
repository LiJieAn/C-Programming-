#include<stdio.h>

int main()
{
	int a=74;
	printf("%c\t%d\t%o\t%x\n",a,a,a,a);/*"\t"  # Tab ����������  ASCII:9*/
	a++;
	printf("%c\t%d\t%o\t%x\n",a,a,a,a);/*%c�r�� %d�Q�i�� %x�K�i�� %o�Q���i�� */
	a++;
	printf("%c\t%d\t%o\t%x\n",a,a,a,a);
	a++;
	printf("%c\t%d\t%o\t%x\n",a,a,a,a);
	a++;
	printf("%c\t%d\t%o\t%x\n",a,a,a,a);
	return 0;
	
	
}
/*"\t"  # Tab ����������  ASCII:9*/ 
/*
%c�G�H�r���覡��X
%d�G10 �i���ƿ�X
%o�G�H 8 �i���Ƥ覡��X
%u�G�L����Ʈ榡��X
%x�B%X�G�N��ƥH 16 �i��覡��X
%f�G�B�I�ƿ�X
%e�B%E�G�ϥά�ǰO��(����e)��ܯB�I��
%g�B%G�G�B�I�ƿ�X�A�� %f �� %e�]%f �� %E�^�A�ݭ��Ӫ�ܺ�²
%%�G��� % ��X�ʤ���Ÿ� 
%s�G�r���X
%lu�Glong unsigned ���A�����
%p�G���Ы��A
*/
/*�r���H�Ʀr��� �b�q���̳Q�sĶ����������"���"*/
/*���P���y����r �����P���s�X�t�� ex:ASCII*/ 
/*ASCII:�i�����b�������H��ƪ�ܯS�w�r�� 
ASCII�X�����Ƚd��O0~127�A�i
�H��7��bit��ܡC
C�y����char���ܼƪ��j�p�W�w���@�줸��
�A�p�G�s��ASCII�X�h�u�Ψ�C7��A���쬰0 
(�Q�i��k)
A��65 Z��90*/ 
