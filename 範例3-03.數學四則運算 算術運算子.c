#include<stdio.h>

int main()
{
	double a=125; /*double 倍精度浮整數 :8 位元組 2.3E-308~1.7E+308  可處理16個位數左右的數字 */ 
	double b=25;
	double result=a+b;
	printf("a+b等於%f \n",result);/*%c：以字元方式輸出 %d：10 進位整數輸出 %f：浮點數輸出*/ 
	result=a-b;
	printf("a-b=%f \n",result);
	result=a*b;
	printf("a*b等於%f \n",result);
	result=a/b;
	printf("a/b等於%f \n",result);
	return 0;
 } 


/*算數運算子
+ 提供兩個運算元的數學加總運算 
- 提供兩個運算元的數學減法運算 
* 提供兩個運算元的數學乘法運算 
/ 提供兩個運算元的數學除法運算 
% 提供兩個運算元的餘數運算 
++遞增運算子 將運算元的值加一 
--遞減運算子 將運算元的值減一 
*/
