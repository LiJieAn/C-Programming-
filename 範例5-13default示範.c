#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	switch (a)
	{
		case 1:/*�ٲ��Fbreak����r*/ 
		case 2:
		case 3:
			printf("�Ĥ@�u");
			break;
		case 4:
		case 5:
		case 6:
			printf("�ĤG�u");
			break;
		case 7: 
		case 8:
		case 9:
			printf("�ĤT�u");
			break;
		case 10:
		case 11:
		case 12:
			printf("�ĥ|�u");
			break;
		default: 
			printf("-");/*��a�o���ܼƭȤ��A0-12 �N���O�@�ӦX�k���� ��������X�榡���Ū��T���r��*/ 
	}
	return 0;
}

/*switch ��default�w�]���A
��Ҧ���switch�P�_�������ŦX�����ΤU �K�|����default�϶�
��]�w�Fdefault ��ܳo��switch�϶��������e �@�w���@�Ӱ϶��Q����*/
