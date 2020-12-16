#include<stdio.h>

int main()
{
	int i, j;
	int count=0;
	int counti=0;
	for(i=1;i<=10;i++)
	{
		count++;
		for(j=1;j<=100;j++)
		{
			counti++;
		}
		
	}
	printf("外部迴圈次數:%d \n",count);
	printf("內部迴圈次數:%d \n",counti);
	return 0;
}
/*巢狀式for迴圈
當在每一次迴圈中 再執行一次迴圈作業時
語法
for(計數初始值;迴圈判斷式;改變計數)
{
	for(計數初始值;迴圈判斷式;改變計數)
	{
		statement;	
	}
}
巢狀迴圈的內部for迴圈 會在每一次外部for迴圈進入執行時 重新完整的執行一次
外部迴圈每執行一次 內部迴圈必須完整執行一次  
→內部迴圈執行次數=本身的次數+ 乘以 外部迴圈的次數*/ 
