#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a%2>0)
		printf("��J�����G:");
		printf("%d�O�_�� \n",a);/*�]�S���j�A�� �u����8��|�Q���L�S������ �ĤE��̵M���`���� �o����~����X���G
		                         �ץ����[�W�j�A��*/ 
	return 0;
 } 
 
 /*if�ԭz���@�w�ݭn�j�A���Ӭɩw�ҭn���檺�{���϶�
 �Y�j�A�����u���@��{���ԭz �i�ٲ��j�A�� �����g�U�o�@��{���X 
 �S���Хܤj�A�����u���򱵵�if�U�誺�Ĥ@��{���X�|���� 
 
 ���Τj�A�����޵o�����~
 if()
 	statementA;
	statementB;
	statementC;
����
 if()
 	statementA;
 statementB;
 statementC;
����
 if(){
 statementA; 
 }
 statementB;
 statementC;
 
 ��if�Q����ɩҼv�T���{���X�u��statementA�@��
 expression�����G�L�׬Otrue��false statementB statementC���|�Q����
 �sĶ�����|�z�|�ƪ������e
 �̦n�٬O�[�W�j�A�� ���Tif�P�_�����{���϶��d��	*/
