#include<stdio.h>

void doadd(int);
int main()
{
	int a=100;
	printf("�ǤJdoadd()���e:%d \n",a);
	doadd(a);
	printf("�ǤJdoadd()����:%d \n",a);
	return 0;
 } 
void doadd(int x)
{
	x++;
	printf("doadd()���B�⵲�G:%d \n",x);
}

/*��a�bmain()�̭��ŧi�ê�l�� �L���ȴN�|�����b100 �N��ȶǤJ��Ƹ̭��ק� �ק諸���G���|�������Ӫ��ѼƤ�
��ƪ��Ѽƶǻ��覡
�N�@�ӰѼƶǤJ�@�Ө㦳�޼ƪ���Ʈ�
��ƪ��޼ƥH"�ǭ�"���覡�i��ǻ� ��@���ܼƳQ�ǤJ��Ʈ� �u���L�������ȳQ�ǤJ �ӫD�ܼ� ���٦���"�ǭ�"
�]�u���ܼƭȳQ�ǻ��i�h �ӥB�o�ӭȥu�O�ƥ� ���ܼƨS�����Y �L�ר�Ƹ̭��i�����B�� �ܼƪ��ȳ����|������v�T
*/
