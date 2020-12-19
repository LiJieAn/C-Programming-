#include<stdio.h>

int main(void)
/*C語言 int main() 和 int main(void) 的差別??？
int main(void) 指的是此函數的參數為空，不能傳入參數??，如果你傳入參數，就會出錯。
int main() 表示可以傳入參數。*/
{
	int i=0;
	int w=0;
	int c=0;
	while(c<6)/*會跑6次*/ 
	{
		c++;
		for(i=10 ;i>=0 ;i--)
		{
			printf("%d,",i);/*從10到0 重複輸出i的值 */
		}
		w=0;
		while(w<=10)
		{
			printf("%d",w);/*從0到10 重複輸出w的值 */ 
			w++;
		}
		printf("\n");/*為了辨識輸出內容 每次外部迴圈結束 輸出一個斷行*/ 
	}
	return 0;
 } 
 /*每一行輸出代表執行了一次外部迴圈*/ 
