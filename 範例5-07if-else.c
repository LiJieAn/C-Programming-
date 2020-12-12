#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d是偶數\n",a);
	}
	else
	{
		printf("%d是奇數\n",a);
	}
	return 0;
 } 

/*判斷式最後輸出的結果無論是true/false都必須做出回應
→if-else包含兩段式輸出結果
  如寡條件式判斷式最後的運算結果是false 則會無條件執行else後方大括號程式區塊裡面的else程式區塊 
  
  if-else同樣支持省略大花號的程式敘述 
if(if判斷式)
{
	if程式區塊;
	... 
} 
else
{
	else程式區塊;
	...
}
*/
