#include<stdio.h>

int main()
{
	int x[3]={10};
	double d[3]={1};
	int y[3]={100,200,300,400};
	printf("x:%d,%d,%d \n",x[0],x[1],x[2]);
	printf("d:%f,%f,%f \n",d[0],d[1],d[2]);
	printf("y:%d,%d,%d \n",y[0],y[1],y[2]);
	return 0;
 } 
 
 /* ��l�ư}�C
�}�C�i�b�@�}�l�ŧi�� �K�i���l�� �y�k: int x[3]={10,20,30};
������l�ƭY�S�����w�j�p �ŧi���}�C�|�ھګ��w����l�|���e �ۦ�w�q ex: int y[]={100,200,500}; ��y�N�|�O�@�Ӫ��׬�3���}�C
��l�ƪ��L�{�� �Y�S�����w���������� ��L�����e�|�H0�Ө��N �����n�t�m�L�h������ �|�ɭP�{���X�{���i�w�������~*/
/*	[Warning] excess elements in array initializer �b��l�ƪ��L�{�� ���w�F�W�X�ƶq�������b�䤤*/ 
