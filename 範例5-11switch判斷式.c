#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	/*switch���B�⦡���B�⵲�G �|�M���U�Ӱ϶�����case��誺�ȳv�@��� ���k�X �i�J�䤤���� ��������X���switch*/ 
	{
		case 1:
			printf("�P���@");
			break;
		case 2:
			printf("�P���G");
			break;
		case 3:
			printf("�P���T");
			break;
		case 4:
			printf("�P���|");
			break;
		case 5:
			printf("�P����");
			break; 
		case 6:
			printf("�P����");
			break; 
		case 7:
			printf("�P����");
			break; 		
	 } 
}

/*switch�P�_��
��P�@�ӹB�⦡�����G ��@�X�h���P�_���c �����h���϶�����ܰ���
�y�k
switch()
{
	case value1:
		�ŦXvalue1 �{���ԭz
		break;
	case value2:
		�ŦXvalue2 �{���ԭz
		breal;
	    ...
	case valuen: 
		�ŦXvaluen �{���ԭz
		break;
		 
}

switch����r���غc�h���P�_�����{���϶�
1.�򱵵ۤp�A���̭����B�⦡ �䵲�G�@���ҭn���檺�϶��̾� 
2.�B�⦡�����G������byte short char int���@�ؾ�ƫ��A���� �_�h�o�ӧP�_���|���� 
3.�򱵵�switch�j�A���̭����϶� �Hcase����r�}�l �w�q�U�ر��p�U�ҭn���檺�϶����e 
4.case���򱵤��� ��switch�B�⦡�����浲�G�ŦX�o�ӱ��� �h�䤤�����e�|���� 
5.�C��case�϶����̫᪺break�ԭz ��o��case�϶����� �o�@��|���X���switch 
6.�u���@��case�|���� 
7.switch���B�⦡���B�⵲�G �|�M���U�Ӱ϶�����case��誺�ȳv�@��� ���k�X �i�J�䤤���� ��������X���switch 
*/ 
