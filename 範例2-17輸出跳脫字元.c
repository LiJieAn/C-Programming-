#include<stdio.h>

int main()
{
	char c1=9;/*ASCII 9=\t 跳格*/
	char c2=10;/*ASCII 10=\n 換行*/
	printf("c1=[%c] \n",c1);
	printf("c2=[%c]",c2);
	return 0;
}

/*沒有辦法直接在程式中用鍵盤敲入對應的字元來表示
→跳脫字元 來要求系統輸出這些特殊符號*/ 
/*可直接將跳脫字元插入字串*/ 

/*                                       
                                           ASCII 
"\'"                  #單引號               39 
"\""                  # 雙引號              34
"\\"                  # 反斜線              92
"\a"                  # 蜂鳴器警報 警告     7
"\b"                  # 退格                8
"\e"                  # 跳脫                
"\f"                  # 換頁
"\n"                  # 換行                10
"\r"                  # 輸入鍵 回覆鍵       13 
"\t"                  # Tab 水平跳格鍵      9
"\v"                  # 垂直 Tab
"\0                   #字串結束             0"*/ 
