#include<stdio.h>

int main()
{
	char g;
	printf("��J�~��:A(0-13) B(14-20) C(21-60) D(>65) \n");
	scanf("%c",&g);
	switch (g)
	{
		case 'A':
			printf("�ൣ��:50");
			break;
		case 'B':/*�ٲ��F���e �����]�wBC�����جۦP �]����JBC���|����15���X�ۦP���T��*/
			/*printf("���H��:100");
			break;*/ 
		case 'C':
			printf("���H��:100");
			break;
		case 'D':
			printf("�ѤH��:80");
			break;
	}
	return 0;
 } 
 /*�ٲ�break 
  ������Ӧ@�αԭz��case�æC �~�o��ҭn���ĪG
  �i�ٲ��@�ӥH�W��break*/ 
