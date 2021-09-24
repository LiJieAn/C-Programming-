//#define 取代函數內容程式碼、大括弧這種c語言語法符號 

//定義函數內容
#include <stdio.h>
#define SAYHELLO printf("歡迎學習c語言\n") //定義了一段程式碼 printf 
#define SAYWELCOME(name) printf("Hello,%s\n",name)//定義了接受一個參數並合併其他字串輸出 

int main(){
	SAYWELCOME("Joy");//引用SAYWELCOME 並傳入一個人名字串 
	SAYHELLO;// 引用SAYHELLO執行預先定義的字串輸出功能程式碼 
	
	return 0;
}
