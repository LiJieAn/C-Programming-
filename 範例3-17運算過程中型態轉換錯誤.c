#include<stdio.h>

int main ()
{
	int x=122;
	int y=4;
	int result1=x/y;
	double result2=(double)x/(double)y;/*x y���૬�A�B��*/ 
	double result3=(double)(x/y);/*������B��~�૬*/ 
	printf("x/y:%d \n",result1);/*x y����int���A �p���I�Q�˱� ���G���~*/ 
	printf("(double)x/(double)y:%f \n",result2);/*x y�w���૬��double �A�� �]���G��double���A �p���I�Q�O�d*/ 
	printf("(double)(x/y):%f \n ",result3);/*xy�����氣�k�B�� �A�૬ ���G���~ �]���k�B��w�N�p���I���� �Y���૬ ���G����*/ 
	return 0;
}
