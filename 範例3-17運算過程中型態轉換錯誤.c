#include<stdio.h>

int main ()
{
	int x=122;
	int y=4;
	int result1=x/y;
	double result2=(double)x/(double)y;/*x y先轉型再運算*/ 
	double result3=(double)(x/y);/*先執行運算才轉型*/ 
	printf("x/y:%d \n",result1);/*x y均為int型態 小數點被捨棄 結果錯誤*/ 
	printf("(double)x/(double)y:%f \n",result2);/*x y預先轉型成double 再除 因結果為double型態 小數點被保留*/ 
	printf("(double)(x/y):%f \n ",result3);/*xy先執行除法運算 再轉型 結果錯誤 因除法運算已將小數點移除 即使轉型 結果仍錯*/ 
	return 0;
}
