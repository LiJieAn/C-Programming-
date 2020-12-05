#include<stdio.h>
int main()
{
	int a=100;
	int b=200;
	int c=300;
	int cop=0;
	cop=(a<b)&&(a<c);
	printf("a小於b而且a小於c:%d \n",cop);
	cop=(a>b)||(a>c);
	printf("a大於b而且a大於c:%d \n",cop);
	return 0;
}

/*邏輯運算子
&& (And) 針對兩組運算式進行AND運算 如果運算式左右兩組運算式的運算結果均是true 否則為false 
|| (OR)  針對兩組運算式進行OR運算 如果運算式左右兩組運算式的運算結果均是false 否則只要有一個是true 則為true 
! (NOT)  執行邏輯反轉運算 提供true false的反轉 c語言 1→true 0→false !1→得到0    !0→得到1

&& || 對兩個運算元的運算結果執行第二次運算
如果運算元A 運算元B的結果相反 則&&的運算結果一律為false ||的運算結果則一律為true*/
