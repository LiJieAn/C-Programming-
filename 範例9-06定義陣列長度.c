#include<stdio.h>
#define ASIZE 6/*代表陣列所宣告的長度為6*/ 
/*利用#define指令 在標頭檔預先定義常數名稱 代表所要宣告的陣列長度 只要偵測這個值 就可避免索引值超出範圍邊界的錯誤*/ 

void setArray(int inta[]);
int main(void)
{
	int i=0;
	int x[6];
	printf("請輸入陣列元素:\n");
	do{
		scanf("%d",&x[i]);
		i++;
	}while(i<ASIZE);
	i=0;
	printf("以下為輸入的內容:\n");
	do{
		printf("%d,",x[i]);
		i++;
	}while(i<ASIZE) ;
	return 0;
	
		
 } 
/*除了以const宣告的常數 另一種表示常數的方法 於檔頭以 #define 預先定義處理
  語法:#define x 100*/
 /*do-while
語法
do
{
	迴圈區塊程式敘述
}while(程式判斷式) ;
關鍵字do定義while迴圈開始 而while迴圈判斷式則在迴圈結束時執行運算 
若結果值為true 這個迴圈會再一次執行 否則跳出迴圈 */
