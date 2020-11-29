#include<stdio.h> 

int main()
{
	int x=100;/*int→整數型態*/
	float y=100.001;/*float→浮點數型態 *精確度無法完整輸出到8位數 *float的數值尾部必須加上f*/
	float a=(float)x;/*將int型態的x傳換成float型態 將結果儲存至a*/ 
	int b=(int)y  ;/*將float型態的y轉換成int型態 將結果儲存至b*/ 
	printf("x:%d \n",x);
	printf("y:%6.3f \n",y);
	printf("a:%6.3f \n",a);/**/ 
	printf("b:%d \n",b);/*b:100 原本的y的小數點被捨去*/ 
	return 0;
	
}

/*
型態轉換→將某種型態的變數轉換成另一種型態
(type)var;
()中所要轉換的[目標]型態
var→所要轉換的變數
此行程式→將變數var從原本的型態轉換成type型態 
*/ 
/*轉型要小心 否則會導致資料錯誤 盡量避免轉型
大範圍型態轉換為小範圍型態 會導致資料遺失 
ex:float→int 小數點會被無條件捨去*/ 
