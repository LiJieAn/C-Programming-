#include<stdio.h>

int main()
{
lblinput:
	printf("�п�J�@�Ӿ��:\n");
	int d;
	scanf("%d",&d);
	
	if(d==0)
		goto lblend;
	if(d%2>0)
		printf("��J����%d�O�_�� \n\n",d);
	else
		printf("��J����%d�O���� \n\n",d);
	goto lblinput;/*���s�N�{���y�{�ಾ�ܲ�5�� �A�@���n�D�ϥΪ̿�J���խ�*/ 
lblend:
	printf("��J0,�{������ \n");
	return 0; 
}
/*�]�䤤�ϥΤFgoto�ԭz �]���{���|���ư��� �����J0���� �~�|���ܵ{�������������T�� �̫ᰱ����� 

/*goto�ԭz �S���y�{����y�k
 ���Ѧۭq�y�{����O ���{���]�p�v���o�{������y�{�������v
 ��{�������goto�ԭz�� �L�|�ھ�����r��誺���ҦW�� ��즹���Ұt�ƪ���m �q���ҩҦb��m�}�l���U���� 
 �y�k
 xlabe1:
 
 �{���ԭz...
 
 goto xlabe1;
 
 xlabe1�O�ۭq�������ѧO�W�� ��趷�s�� : 
 �\��:�@���{����m���w���I �ھڬy�{����ݨD �t�m��{�����Y�ӷQ�n���檺��m
 
  

*/
