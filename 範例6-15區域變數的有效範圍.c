#include<stdio.h> 

int main()
{
	char message[12]="Hello";
	if(1)
	{
		char messageB[12]="Welcome";
		printf("%s",message);/*%s：字串輸出*/
	 } 
	printf("%s",messageB);/*出現messageB沒有宣告的錯誤*/ 
	return 0;
}
/*區域變數的有效範圍
if switch敘述 for while迴圈...均會形成一個封閉區塊
在這些區塊中 宣告了變數 這個變數只在區塊內有效 區塊以外的位置對其存取都會發生錯誤
因為區塊代表一個封裝的區域 在區域內可以存取外部資源 但外部無法存取區塊內的資源*/ 
