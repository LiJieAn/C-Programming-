#include<stdio.h>

int main ()
{
	int result=0;
	int x;
	x=100;
	result=++x;
	printf("++x=%d,result=%d \n",x,result);
	x=100;
	result=x++;
	printf("x++=%d,result=%d \n",x,result);
	return 0;
}



/*���W/���� �B��l �i�M�Φb�B�⤸����Τ��e ���N�q���P
x=100
x++  ++x  ���Ox���ȥ[�W1
result=x++ (x=101 result=100)����{�����Nx��Ӫ��ȫ��w��result �A���滼�W�C result�o�쪺�ȬO�����W���e���� x�����̫��٬O�|�������W���B�� 
result=++x (x=101 result=101)����{�����Nx���滼�W�B�� �A�N���G���w��result �G��̪����G���O101
*/

