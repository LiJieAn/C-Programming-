#include<stdio.h>

int main ()
{
	int result=0;
	int x;
	x=100;
	result=++x;
	printf("++x=%d,result=%d \n",x,result);
	x=100;
	result=x++;
	printf("x++=%d,result=%d \n",x,result);
	return 0;
}



/*遞增/遞減 運算子 可套用在運算元之後或之前 但意義不同
x=100
x++  ++x  都是x的值加上1
result=x++ (x=101 result=100)此行程式先將x原來的值指定給result 再執行遞增。 result得到的值是未遞增之前的值 x本身最後還是會完成遞增的運算 
result=++x (x=101 result=101)此行程式先將x執行遞增運算 再將結果指定給result 故兩者的結果都是101
*/

