#include<stdio.h>

int main() 
{
	printf("%6.3f",100.123);/*當要指定輸出的位數長度 只要以%[輸出寬度].[小數位數]格式字元 
	                          .左邊表示包含小數位數在內 總共需要的寬度 →整個輸出數值的位數
							  .右邊表示小數點所需的位數*/ 
	return 0;
}

/*格式化輸出的排版
 透過指定+ - 搭配欄位寬度的指定達到
 一般 預設 數字輸出的位數都不會是我們想要的 
 語法:
 %[修飾詞][輸出寬度].[小數位數]格式字元
 
 修飾詞   
 -     靠左對齊 (printf()預設將數字靠右對齊 
 0     將0填滿空白區域 
 +     在數值是正的時候 顯示正值符號 
 空白  數值為正值時 保留一個空白 負值時顯示一個負號 
 
 輸出寬度
 整數  數值所要顯示的位數寬度 包含小數點
 
 小數位數
 整數  小數位數所要顯示的位數寬度
 
 *→在輸出時可預先設定寬度的符號
 printf("%*d",5,1)→以五個字元寬度輸出1 
 在程式碼中間嵌入 * 就可在第一個引數前指定所要預留的寬度
  
 */  
