#include<stdio.h>

int main()
{
	int a=100;
	int b=40;
	double d=40;
	int v =a/b; 
	/*v=2 �]�䤤�T���ܼƳ��Oint���A 2.5��double���A ���F�ŦXint���A �|�˱�䤤���p���I �o��S���p���I��int���A���*/
	double dv1=a/b;
	/*dv1=2.0000000 �����O���T���G2.5 a/b���G2 �]��a b���O��� �ҥH�o�쪺���G�]�O���(�p���I��Q�˱�) 
	�Q�۰��૬��double 2.0  
	!!�૬�|�۰ʵo�� ���]�૬���ɾ����� �ӿ��~*/ 
	double dv2=a/d;
	/*dv2=2.50000 ���T �]d��double���A a �|���૬��double �A�����k�B�� */ 
	
	printf("a/b(int):%d \n",v);
	printf("a/b(double):%f \n",dv1);
	printf("a/d:%f \n",dv2);
	return 0;
}
/*
���A�ഫ���N�Y�ث��A���ܼ��ഫ���t�@�ث��A
(type)var;
()���ҭn�ഫ��[�ؼ�]���A
var���ҭn�ഫ���ܼ�
����{�����N�ܼ�var�q�쥻�����A�ഫ��type���A 
*/
/*�b����B��� �̦n�ھڻݨD �T��N�ܼ��૬�����T���A �קK�B��L�{���i�ಣ�ͪ����~ ��ƿ�*/ 
