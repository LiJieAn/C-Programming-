#include<stdio.h>

int main()
{
	printf("%+d \n",-100);
	printf("%+d \n",100);
	printf("% d \n",-100);
	printf("% d \n",100);
	return 0;
 } 
 /*修飾詞
 -     靠左對齊 (printf()預設將數字靠右對齊 
 0     將0填滿空白區域 
 +     在數值是正的時候 顯示正值符號 
 空白  數值為正值時 保留一個0空白 負值時顯示一個負號 */
