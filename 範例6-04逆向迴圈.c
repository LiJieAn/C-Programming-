#include<stdio.h>

int main()
{
	int s=0;
	int i;
	for(i=10;i>=0;i--)/*��i>=0�� �~��U�@�����j�� �_�h�K�����j��*//*�C�@�����j��i�ܼƴӳQ��@*/ 
	{
		s+=i;/*i�̧ǻ���[�` �@����L����0�ɳQ�פ�*/   
	}
	printf("10�[��1����%d \n",s);
	return 0;
}
/*for�j�� 
for(�p�ƪ�l��;�j��P�_��;���ܭp��)
{
	�j��϶��{���ԭz
} */ 
