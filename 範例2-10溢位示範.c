#include<stdio.h>

int main()
{
	short s=32768;/*short:-32768~32767 *//*產生溢位*/ 
	printf("short 變數 s=%d\n",s);
	return 0;
 } 
 /*當將一個超過型態範圍的數值設定給宣告為此型態的變數 此變數會產生[溢位overflow]
  溢位將導致數值回頭從最小的值開始運算*/ 
