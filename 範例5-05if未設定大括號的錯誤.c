#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a%2>0)
		printf("輸入的結果:");
		printf("%d是奇數 \n",a);/*因沒有大括號 只有第8行會被跳過沒有執行 第九行依然正常執行 得到錯誤的輸出結果
		                         修正→加上大括號*/ 
	return 0;
 } 
 
 /*if敘述不一定需要大括弧來界定所要執行的程式區塊
 若大括號中只有一行程式敘述 可省略大括弧 直接寫下這一行程式碼 
 沒有標示大括號→只有緊接著if下方的第一行程式碼會執行 
 
 不用大括號易引發的錯誤
 if()
 	statementA;
	statementB;
	statementC;
等於
 if()
 	statementA;
 statementB;
 statementC;
等於
 if(){
 statementA; 
 }
 statementB;
 statementC;
 
 當if被執行時所影響的程式碼只有statementA一行
 expression的結果無論是true或false statementB statementC都會被執行
 編譯器不會理會排版的內容
 最好還是加上大括號 明確if判斷式的程式區塊範圍	*/
