#include<stdio.h>

int main()
{
	int count=0;
	while(1)/*while判斷式為非0數→無窮迴圈*/
	{
		count++;
		if(count>100)/*檢視count是否已經大於100 是的話引用break 中斷迴圈的執行*/ 
		{
			break;
		}
		/*while迴圈不斷執行到count的值超過100 */ 
	}
	printf("count等於%d \n",count);
	return 0;
 } 
 /*強制中斷迴圈
預設情況下 到達指定條件才會結束迴圈的執行
當需要強制程式流程離開正常執行的迴圈→
1.break
如同在switch敘述中的功能
將其配置在迴圈區塊內指定的位置 就能達到中斷得效果
當程式執行到break這一敘述 迴圈便會中斷 跳出整個大括弧的執行範圍
!!注意因break會無條件中斷並跳出迴圈 故通常會搭配if敘述決定是否要執行 在某些條件符合的形況下 才會執行break敘述來中斷迴圈
語法
while()
{
	...
	break;//程式在此跳出迴圈 
	
}*/ 
