#include<stdio.h>

int main()
{
	int value1=600;
	int value2=200;
	int value3=800;
	int result1=value1>value2 ;
	int result2=value1>value3;
	printf("result1����%d \n",result1);
	printf("result2����%d \n",result2);
	return 0;
 } 


/*
���Y�B��l	  �N�q	    �ϥνd��	�d�ҹB�⵲�G
==	          ����	    1+1 == 2	1
!=	          ������   	3 != 4  	1
>	          �j��	    5 > 7	    0
>=	          �j�󵥩�	3 >= 5	    0
<	          �p��	    2 < 6	    1
<=	          �p�󵥩�	8 <= 8	    1

����B��l�w��B��l���k����������B��
�p�G����B�⪺���G���� �h�^��true(�D0��) �_�h�^��false(0)*/ 
