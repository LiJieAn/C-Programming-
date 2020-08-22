/*底下為簡單的I/O範例 其中示範了完整的資料輸出和輸入操作 
  I/O 資料的輸入和輸出 */
  
/*C語言 int main() 和 int main(void) 的差別??？
int main(void) 指的是此函數的參數為空，不能傳入參數??，如果你傳入參數，就會出錯。
int main() 表示可以傳入參數。
//這樣是正确的
int main()
{
  if (0) main(42);
}

// 這樣會出錯
int main(void)
{
  if (0) main(42);
}*/
   
#include<stdio.h>
int main(void)
{
	char s[12];/*char 聲明字符型變量或函數 未了解char用法*/
	printf("請輸入名稱:");
	gets(s);/*gets()←函數 接收使用者輸入的資料 並將其儲存至s變數*/ 
	printf("Hello,%s \n",s);/*\n  New Line，換行符號*//*％s用來輸出一個字符串，*/ 
	return 0;
}
	
	
