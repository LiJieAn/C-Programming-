#include<stdio.h>

int main()
{
	int i=2;
	int number1=2;
	int j=1;
	int number2=2;
	while(number1%2 !=0)/*�}�l����l�Ȭ����� �Ĥ@�q�j��L�k�q�Lwhile�˵� �S�������X */ 
	{
		printf("number1:%d \n",number1);
		number1=3*i;
		i++;
	}
	do/*�L�צp�󳣷|����@�� ������X�䤤��number2 */ 
	{
		printf("number2:%d \n",number2);
		number2=3*j;/*number2�Q�վ㦨�T������ 
					�G�j�鵲���� while�P�_��=true���~��U�@�����j�� ����number2�ܦ�6 �����j��*/
		j++;
		
	}while(number2%2 !=0);
	return 0;
}

/*do-while
�y�k
do
{
	�j��϶��{���ԭz
}while(�{���P�_��) ;

����rdo�w�qwhile�j��}�l ��while�j��P�_���h�b�j�鵲���ɰ���B�� 
�Y���G�Ȭ�true �o�Ӱj��|�A�@������ �_�h���X�j�� 

do-while �Mwhile�j�骺�t�O:
do-while�L�צp�󳣷|(�L�������)������@���϶������{���X �Y�Kwhile���P�_�����G��false
�b�j���������X while do-while�S���t�O �u�|�v�T�Ĥ@�������� */ 
