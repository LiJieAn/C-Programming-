#include<stdio.h>

int main()
{
	char schar='Y';
	putchar(schar);
	putchar('0');
	putchar('U');
	putchar('\n');
	return 0;
}
/*輸出YOU之後斷行*/
/*putchar()對於單一字元的輸出 很方便
  但使用上沒有printf()這麼彈性*/ 
  
 /*提供字元資料讀區功能的函式 
scanf("%?",&?)
getchar() 讀取字元 並將其取出  會在使用者按下enter鍵時 從畫面上讀取 
putchar() 於螢幕畫面上輸出指定的變數字元內容  對於單一字元的輸出很方便 
getche()  讀取字元 並將其取出顯示在螢幕上 
getch()   讀取字元 但不顯示在螢幕上 不會顯示輸入的字元 同時輸入之後便自動結束字元的讀取  

*getche() getch()要搭配標頭檔conio.h才能順利進行引用 
 getchar()和getche()的差別 getche()不需要再經過enter鍵就能完成輸入
 getche()和getch()的差別 getch()不會顯示所讀取的字元=你看不見所輸入的字元 */  
