#include<stdio.h>

int main()
{
	int x[6];
	int size=sizeof(x);
	int isize=size/4;/*�@��int�j�p�O�|�Ӧ줸*/ 
	printf("x�}�C�ү��x�s���줸��:%d\n",size);
	printf("x�}�C�ү��x�s��int �ƶq:%d \n",isize);
	return 0;
 } 
/*�z�Lsizeof()��Ʀ^�ǰ}�C�ү��x�s���줸�ռƥ� �A�ھڦ줸�ռƥ� �Y�i���o�}�C�ү��x�s�����A��Ƽƶq
int size=sizeof(x);
x���@�Ӱ}�C �N��ǤJsizeof() int���A���ܼ��x�s��^�Ǫ���� �N��o�Ӱ}�Cx�ү��x�s��"�줸�ƥ�"
*/
