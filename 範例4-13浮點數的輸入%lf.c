#include<stdio.h>

int main()
{
	int var1;
	double var2;
	float var3;
	scanf("%d %lf %f",&var1,&var2,&var3);/*%lf*/
	printf("��J���Ƶ���%d,%.2f,%.2f \n",var1,var2,var3);
	return 0;
}
/*printf�Mscanf���ϥέ�z�j�P�ۦP
���P:
scanf����Jdouble���A���ƭ� �n��%lf
           float                %f*/ 
