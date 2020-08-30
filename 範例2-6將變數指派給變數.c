#include<stdio.h>

int main ()
{
	int x=123;
	int y=300;
	y=x;/*將x直接指派給y => */
	printf("x=%d,y=%d \n",x,y);
	return 0;
 } 
 /*雖然x的值被指派給y 但原來x的值依然存在 y只是儲存了一個相同的數值 因此最後輸出的結果值均相同*/
