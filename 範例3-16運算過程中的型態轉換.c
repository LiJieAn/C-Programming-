#include<stdio.h>

int main()
{
	int a=100;
	int b=40;
	double d=40;
	int v =a/b; 
	/*v=2 因其中三個變數都是int型態 2.5為double型態 為了符合int型態 會捨棄其中的小數點 得到沒有小數點的int型態整數*/
	double dv1=a/b;
	/*dv1=2.0000000 仍不是正確結果2.5 a/b結果2 因為a b都是整數 所以得到的結果也是整數(小數點後被捨棄) 
	被自動轉型成double 2.0  
	!!轉型會自動發生 但因轉型的時機不對 而錯誤*/ 
	double dv2=a/d;
	/*dv2=2.50000 正確 因d為double型態 a 會先轉型成double 再做除法運算 */ 
	
	printf("a/b(int):%d \n",v);
	printf("a/b(double):%f \n",dv1);
	printf("a/d:%f \n",dv2);
	return 0;
}
/*
型態轉換→將某種型態的變數轉換成另一種型態
(type)var;
()中所要轉換的[目標]型態
var→所要轉換的變數
此行程式→將變數var從原本的型態轉換成type型態 
*/
/*在執行運算時 最好根據需求 確實將變數轉型為正確型態 避免運算過程中可能產生的錯誤 資料遺失*/ 
