#include<stdio.h>

void dox();
void doy();

int main()
{
	int i=0;
	for(i=0;i<3;i++)
	{
		dox();
		doy();
	}
	return 0;
	
 } 
void dox()
{
	static int a=100;/*�C��dox()���ܼ�a���Ȧb��������|�Q�O�d�U�� ��a���ȷ|�@���W�[ �]���U�@���j��ޥ�dox()��a���ȬO�e�@�������ƫ᪺��*/ 
	printf("dox():a=%d, ",a);
	a+=100;
}
void doy()
{
	int a=100;/*�S���ޥ�static ���@�몺�ܼ� �C�@������� �L�|���s�t�m�öi���l�� �Y�Ϧb��Ƶ����e+100 ��U�@�������椣�|������v�T*/ 
	printf("doy():a=%d \n",a);
	a+=100;
}
