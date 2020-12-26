#include<stdio.h>
#include<stdlib.h>

void hello(); 
int main()
{
	hello();/*宣告了函數的原型*/ 
	return 0;
	
 } 
 void hello()/*函數的定義*/ 
 {
 	/**/
 	printf("hello,world");
 }
 
 /*第7行透過函數名稱hello()的呼叫 執行這個函數
 此時程式會從第7行跳到第11行執行 第15行結束之後 回到第8行開始執行*/
 /*此為在main()中呼叫函數 並在此之前先宣告原型 再將函數的定義配置於main()後方*/ 
