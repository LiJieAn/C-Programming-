#include<stdio.h>

int main (){
	char c1 =65; //65->A (ASCII字元碼 
	char c2 =90; //90->Z
	printf("char 變數 c1 = %c \n",c1);
	printf("char 變數 c2 = %c \n",c2);
	return 0;
}

//%c 顯示單個字元 
/*字元以數字表示 在電腦裡被編譯成為對應的"整數"*/
/*不同的語言文字 →不同的編碼系統 ex:ASCII*/ 
/*ASCII:可直接在城市中以整數表示特定字元 
ASCII碼的取值範圍是0~127，可
以用7個bit表示。
C語言中char型變數的大小規定為一位元組
，如果存放ASCII碼則只用到低7位，高位為0 
(十進位法)
A→65 Z→90*/ 
