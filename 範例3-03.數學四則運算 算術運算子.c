#include<stdio.h>

int main()
{
	double a=125; /*double ����ׯB��� :8 �줸�� 2.3E-308~1.7E+308  �i�B�z16�Ӧ�ƥ��k���Ʀr */ 
	double b=25;
	double result=a+b;
	printf("a+b����%f \n",result);/*%c�G�H�r���覡��X %d�G10 �i���ƿ�X %f�G�B�I�ƿ�X*/ 
	result=a-b;
	printf("a-b=%f \n",result);
	result=a*b;
	printf("a*b����%f \n",result);
	result=a/b;
	printf("a/b����%f \n",result);
	return 0;
 } 


/*��ƹB��l
+ ���Ѩ�ӹB�⤸���ƾǥ[�`�B�� 
- ���Ѩ�ӹB�⤸���ƾǴ�k�B�� 
* ���Ѩ�ӹB�⤸���ƾǭ��k�B�� 
/ ���Ѩ�ӹB�⤸���ƾǰ��k�B�� 
% ���Ѩ�ӹB�⤸���l�ƹB�� 
++���W�B��l �N�B�⤸���ȥ[�@ 
--����B��l �N�B�⤸���ȴ�@ 
*/
