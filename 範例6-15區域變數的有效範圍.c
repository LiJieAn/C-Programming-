#include<stdio.h> 

int main()
{
	char message[12]="Hello";
	if(1)
	{
		char messageB[12]="Welcome";
		printf("%s",message);/*%s�G�r���X*/
	 } 
	printf("%s",messageB);/*�X�{messageB�S���ŧi�����~*/ 
	return 0;
}
/*�ϰ��ܼƪ����Ľd��
if switch�ԭz for while�j��...���|�Φ��@�ӫʳ��϶�
�b�o�ǰ϶��� �ŧi�F�ܼ� �o���ܼƥu�b�϶������� �϶��H�~����m���s�����|�o�Ϳ��~
�]���϶��N��@�ӫʸ˪��ϰ� �b�ϰ줺�i�H�s���~���귽 ���~���L�k�s���϶������귽*/ 
