#include<stdio.h>
#include<conio.h>

int main()
{
	char che[6];/*宣告一個char型態的陣列 儲存輸入的字元*/ 
	int i=0;
	printf("輸入5個字元密碼:");
	for(i=0;i<5;i++)
	/*for迴圈 執行五次 每一次要求使用者輸入一個密碼字元 
	因getch()不會顯示所讀取的字元=你看不見所輸入的字元
	輸入完成後 他會執行下一個迴圈等待使用者輸入下一個字元
	一旦完成五次的單一字元輸入 跳出迴圈 將一個字串結束字元指定給陣列的最後一個引索位置*/ 
	{che[i] = getch();
		}	
	che[5]='\0';
	printf("\n輸入的字元:%s\n",che);
	return 0;
 } 
/*注意在第五個字元結束的時候 程式會自動結束輸入 直接顯示
  getch()不會顯示 輸入的字元 同時輸入之後便自動結束字元的讀取 
 
 /*提供字元資料讀區功能的函式 
scanf("%?",&?)
getchar() 讀取字元 並將其取出  會在使用者按下enter鍵時 從畫面上讀取 
putchar() 於螢幕畫面上輸出指定的變數字元內容  對於單一字元的輸出很方便 
getche()  讀取字元 並將其取出顯示在螢幕上 
getch()   讀取字元 但不顯示在螢幕上 不會顯示輸入的字元 同時輸入之後便自動結束字元的讀取  

*getche() getch()要搭配標頭檔conio.h才能順利進行引用 
 getchar()和getche()的差別 getche()不需要再經過enter鍵就能完成輸入 
 getche()和getch()的差別 getch()不會顯示所讀取的字元=你看不見所輸入的字元 
*/  
