#include<stdio.h>

int main()
{
	char c1='Z';/*字元以單引號表示*/
	char c2='Y';
	printf("char 變數c1=%c  \n",c1);/*宣告char型態的變數 並將單一字元指派給他*/ 
	printf("char 變數c2=%c  \n",c2);/*輸出格式%c*/
	return 0;
	
 } 


/*字元為整數型態的資料 BUT字元被用來處理文字 故獨立討論*/
/**/ 
/*char→表示單一字元 每一個字元佔單一位元組的空間 */ 
/*當要設定一個字元時 須以'單引號' 表示*/
/*char c1 = 'z'; 宣告一個char型態變數c1 以單引號框住做其值的單一字元z*/
