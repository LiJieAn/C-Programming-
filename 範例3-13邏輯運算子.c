#include<stdio.h>
int main()
{
	int a=100;
	int b=200;
	int c=300;
	int cop=0;
	cop=(a<b)&&(a<c);
	printf("a�p��b�ӥBa�p��c:%d \n",cop);
	cop=(a>b)||(a>c);
	printf("a�j��b�ӥBa�j��c:%d \n",cop);
	return 0;
}

/*�޿�B��l
&& (And) �w���չB�⦡�i��AND�B�� �p�G�B�⦡���k��չB�⦡���B�⵲�G���Otrue �_�h��false 
|| (OR)  �w���չB�⦡�i��OR�B�� �p�G�B�⦡���k��չB�⦡���B�⵲�G���Ofalse �_�h�u�n���@�ӬOtrue �h��true 
! (NOT)  �����޿����B�� ����true false������ c�y�� 1��true 0��false !1���o��0    !0���o��1

&& || ���ӹB�⤸���B�⵲�G����ĤG���B��
�p�G�B�⤸A �B�⤸B�����G�ۤ� �h&&���B�⵲�G�@�߬�false ||���B�⵲�G�h�@�߬�true*/
