#include<stdio.h>

int x=0;
void showmsg();
int main()
{
	showmsg();
	return 0;
 } 
void showmsg()/*�@�}�l���檺�a��*/ 
{
	x++;
	if(x>10)/*x>10 ��������ƪ�����*/ 
		return ;/*02.���j�B�⪽��Y�@����ƳQ�פ� �h�^��e��showmsg()�ޥΪ���m �v�@�����e�������槹�������*/
		 		/*��return�Q���� ��ܻ��j��ƱN�}�l�^��W�@���������m*/ 
	printf("recursion(%d)...\n",x);
	showmsg();/*�I�s�ۤv �F�쭫�ư���F�컼�j���ĪG 01.�b�����I�s�ۤv���ɭ� ���s�^��@�}�l���檺�a��b����@�� �M��L���`��*/ 
	x--;
	printf("������%d������ư���\n",x);/*03.�������������~����檽���Ƶ��� �A�^��W�����Ƨ����C�@�����������{���ԭz*/ 
}
/*
*/ 
