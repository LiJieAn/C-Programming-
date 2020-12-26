#include<stdio.h>

int dox();
int main()
{
	int x=100;
	printf("%d",x);
	return 0;
 } 
int dox()
{
	/**/
	int x=200;
}
/*函數區域內宣告的變數 因只在函數的內部有效 因此在第6行和第13行的x
雖名稱相同 但屬於不同的範圍 無法在外部被引用 因此名稱相同亦不會產生衝突*/ 
