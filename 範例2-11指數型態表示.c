#include<stdio.h>

int main()
{
	float f=123.456789e6f;
	double d=456.789e4;
	printf("float �ܼ� s=%f \n",f); /*%f�H�B�I�ƪ��榡��X���w����*/
	printf("double �ܼ� s=%f \n",d);
	printf("float �ܼ� s=%e \n",f); /*%e�H��ǰO�����榡��X���w����*/
	printf("double �ܼ� s=%e \n",d);
	return 0;
	 
 } 
 /*�B�I��float �B�I��: 4 �줸�� 1.2E-3~3.4E+38  *3.4E+38=3.4���H10��38���� 
	    double ����ׯB��� :8 �줸�� 2.3E-308~1.7E+308 
   �B�I��: �N��]�t�p���I��ƪ��ƭȸ�� ��Ƥj�p�d����Ƥj�o�h �A�X�j���ƭȸ�ƪ��B��
   double���d��� float�j�o�h
   double�i�B�z16�Ӧ�ƥ��k���Ʀr 
   float �i�B�z8�Ӧ�ƪ��Ʀr float��T�׵L�k�����X��8���*/
/*c�y���w�]�����p�U �N�Ҧ��]�t�p���I���B�I�Ʒ�@double�κA�B�z 
  �`�N ��ŧi�F�@��float���A���ƭ� ���w�o���ܼƪ��ƭȪ������n�Х�f �� F �j��Hfloat���κA�B�z
  �����N�@�ӥ��Hf�Хܪ��Ʀr���w��float�ܼƥi�H�q�L�sĶ ���|�����A�ഫ���D ����ĳ�o�˰� 
  double d =100.123;
  float f =100.456f;*/ 
/*�i�ά�ǲŸ���ܳo��ث��A���Ʀr
  e �� E ���N�q���ۦP ���10������
  double x=1.02e3 1.02���H10��3���� 
  double y=1.02E3*/
/*�n��X�@�ӯB�I�ƫ��A���ƭȮ� �n�bprintf("")�����w[%f]���榡�ƲŸ� */
/*
%d�G10 �i���ƿ�X
%f�G�B�I�ƿ�X
%e�B%E�G�ϥά�ǰO����ܯB�I��
%g�B%G�G�B�I�ƿ�X�A�� %f �� %e�]%f �� %E�^�A�ݭ��Ӫ�ܺ�²(���z��
*/
