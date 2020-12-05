#include<stdio.h>

int main()
{
	int a=100;
	int b=200;
	char c=a>b? 'T':'F';
	printf("a>b:%c \n",c);
	return 0;
 } 


/*
條件式運算子 ?: 需要提供三個運算元(三元運算子) 
result = condition ? value1 : value2
condition →條件判斷式 最後回傳的是一個true/false結果值 如果結果為true 將value1儲存至result 否則為value2
條件式運算子
?: →三元運算子(if-then-else的陳述式的簡寫) */
