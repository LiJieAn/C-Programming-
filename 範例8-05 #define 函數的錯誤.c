/*#define 的問題
  2.錯誤的巨集運算邏輯 
  (1) 若是定義函數程式碼 可能會因運算邏輯的差異 導致最後運算邏輯非預期
      因運算邏輯的差異  ex:先乘除後加減 有沒有加括號*/
  
#include<stdio.h>
#define doma(a,b) a*b
#define domb(a,b) (a)* (b)//透過小括弧標示參數 
int main(){
	int a=1,b=2;
	int ma=doma(a+1,b+2); //1+1*2+2 =1+2+2=5 =>先乘除後加減 +沒加括號的運算順序錯誤 
	int mb=domb(a+1,b+2); // (1+1)*(2+2)=2*4=8  
	printf("doma(a,b):%d\n",ma);
	printf("domb(a,b):%d\n",mb);
	return 0;
}
