#include<stdio.h>

int main(void)
/*C�y�� int main() �M int main(void) ���t�O??�H
int main(void) �����O����ƪ��ѼƬ��šA����ǤJ�Ѽ�??�A�p�G�A�ǤJ�ѼơA�N�|�X���C
int main() ��ܥi�H�ǤJ�ѼơC*/
{
	int i=0;
	int w=0;
	int c=0;
	while(c<6)/*�|�]6��*/ 
	{
		c++;
		for(i=10 ;i>=0 ;i--)
		{
			printf("%d,",i);/*�q10��0 ���ƿ�Xi���� */
		}
		w=0;
		while(w<=10)
		{
			printf("%d",w);/*�q0��10 ���ƿ�Xw���� */ 
			w++;
		}
		printf("\n");/*���F���ѿ�X���e �C���~���j�鵲�� ��X�@���_��*/ 
	}
	return 0;
 } 
 /*�C�@���X�N�����F�@���~���j��*/ 
