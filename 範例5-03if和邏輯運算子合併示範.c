#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a>59)
	{
		printf("%d�ή� \n",a);
	}
	if(a<60&&a>39)/*�P�ɳq�L�o��ӧP�_�� �h��X�ɦ�*/ 
	{
		printf("%d���ή�,�ɦ� \n",a);
	}
	if(a<40)
	{
		printf("%d���� \n",a);
	}
	return 0;
 } 

/*if(�B�⦡1&&�B�⦡2)
�B�⦡1 �B�⦡2�|���W�߹B�� �M��^��true/false
�޿�B��l�A�i�@�B�w���ӹB�⦡�����G�i��B�� �^�ǳ̫᪺�B�⵲�G
if�P�_���o�ھڦ����G�M�w�O�_����䤤���϶�*/ 
 
/*�޿�B��l
&& (And) �w���չB�⦡�i��AND�B�� �p�G�B�⦡���k��չB�⦡���B�⵲�G���Otrue �_�h��false 
|| (OR)  �w���չB�⦡�i��OR�B�� �p�G�B�⦡���k��չB�⦡���B�⵲�G���Ofalse �_�h�u�n���@�ӬOtrue �h��true 
! (NOT)  �����޿����B�� ����true false������ c�y�� 1��true 0��false !1���o��0    !0���o��1
&& || ���ӹB�⤸���B�⵲�G����ĤG���B��
�p�G�B�⤸A �B�⤸B�����G�ۤ� �h&&���B�⵲�G�@�߬�false ||���B�⵲�G�h�@�߬�true*/ 
