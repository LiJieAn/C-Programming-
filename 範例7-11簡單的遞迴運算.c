#include<stdio.h>

int x=0;
void showmsg();
int main()
{
	showmsg();
	return 0;
 } 
void showmsg()/*一開始執行的地方*/ 
{
	x++;
	if(x>10)/*x>10 →結束函數的執行*/ 
		return ;/*02.遞迴運算直到某一次函數被終止 則回到前次showmsg()引用的位置 逐一完成前次未執行完畢的函數*/
		 		/*當return被執行 表示遞迴函數將開始回到上一次的執行位置*/ 
	printf("recursion(%d)...\n",x);
	showmsg();/*呼叫自己 達到重複執行達到遞迴的效果 01.在執行到呼叫自己的時候 重新回到一開始執行的地方在執行一次 然後無限循環*/ 
	x--;
	printf("完成第%d次的函數執行\n",x);/*03.未完成的部分繼續執行直到函數結束 再回到上次重複完成每一次未完成的程式敘述*/ 
}
/*
*/ 
