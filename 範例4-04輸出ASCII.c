#include<stdio.h>

int main()
{
	int a=74;
	printf("%c\t%d\t%o\t%x\n",a,a,a,a);/*"\t"  # Tab 水平跳格鍵  ASCII:9*/
	a++;
	printf("%c\t%d\t%o\t%x\n",a,a,a,a);/*%c字元 %d十進位 %x八進位 %o十六進位 */
	a++;
	printf("%c\t%d\t%o\t%x\n",a,a,a,a);
	a++;
	printf("%c\t%d\t%o\t%x\n",a,a,a,a);
	a++;
	printf("%c\t%d\t%o\t%x\n",a,a,a,a);
	return 0;
	
	
}
/*"\t"  # Tab 水平跳格鍵  ASCII:9*/ 
/*
%c：以字元方式輸出
%d：10 進位整數輸出
%o：以 8 進位整數方式輸出
%u：無號整數格式輸出
%x、%X：將整數以 16 進位方式輸出
%f：浮點數輸出
%e、%E：使用科學記號(指數e)顯示浮點數
%g、%G：浮點數輸出，取 %f 或 %e（%f 或 %E），看哪個表示精簡
%%：顯示 % 輸出百分比符號 
%s：字串輸出
%lu：long unsigned 型態的整數
%p：指標型態
*/
/*字元以數字表示 在電腦裡被編譯成為對應的"整數"*/
/*不同的語言文字 →不同的編碼系統 ex:ASCII*/ 
/*ASCII:可直接在城市中以整數表示特定字元 
ASCII碼的取值範圍是0~127，可
以用7個bit表示。
C語言中char型變數的大小規定為一位元組
，如果存放ASCII碼則只用到低7位，高位為0 
(十進位法)
A→65 Z→90*/ 
