#include<stdio.h>

int main()
{
	int i=0;
	for(;;)/*沒有任何運算式的for迴圈*/ 
	{
		i++;
		printf("loop:%d \n",i); 
		if(i>10) break;/*break如同在switch的用法 強制中止此迴圈的執行作業*/ 
	}
	return 0;
	
 } 
 /*此迴圈一旦執行就不會中止 但是他是一個成功的程式*/
 /*當沒有辦法明確指定何時停止程式的執行→在for迴圈中加入if判斷式*/ 
  
