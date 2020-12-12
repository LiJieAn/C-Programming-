#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a%2>0)
		printf("a等於%d是奇數 \n",a);
	if(a%2==0)
		printf("a等於%d是偶數 \n",a);
	return 0;
}
/*if敘述不一定需要大括弧來界定所要執行的程式區塊
 若大括號中只有一行程式敘述 可省略大括弧 直接寫下這一行程式碼 
 沒有標示大括號→只有緊接著if下方的第一行程式碼會執行 
 會透過縮排來和其他程式碼做區隔
 if判斷式和statement可合併成一行  
  
 if(判斷式)
 	statement;
 statement2; 
 
 if(判斷式) statement; 
 
 */ 
