#include<stdio.h>

int main()
{
	int value1=600;
	int value2=200;
	int value3=800;
	int result1=value1>value2 ;
	int result2=value1>value3;
	printf("result1等於%d \n",result1);
	printf("result2等於%d \n",result2);
	return 0;
 } 


/*
關係運算子	  意義	    使用範例	範例運算結果
==	          等於	    1+1 == 2	1
!=	          不等於   	3 != 4  	1
>	          大於	    5 > 7	    0
>=	          大於等於	3 >= 5	    0
<	          小於	    2 < 6	    1
<=	          小於等於	8 <= 8	    1

比較運算子針對運算子左右兩邊執行比較運算
如果比較運算的結果成立 則回傳true(非0數) 否則回傳false(0)*/ 
