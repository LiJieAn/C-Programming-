#include<stdio.h>

int main()
{
	int x[6];
	int size=sizeof(x);
	int isize=size/4;/*一個int大小是四個位元*/ 
	printf("x陣列所能儲存的位元組:%d\n",size);
	printf("x陣列所能儲存的int 數量:%d \n",isize);
	return 0;
 } 
/*透過sizeof()函數回傳陣列所能儲存的位元組數目 再根據位元組數目 即可取得陣列所能儲存的型態資料數量
int size=sizeof(x);
x為一個陣列 將其傳入sizeof() int型態的變數儲存其回傳的整數 代表這個陣列x所能儲存的"位元數目"
*/
