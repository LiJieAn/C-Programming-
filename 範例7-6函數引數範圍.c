#include<stdio.h>

void dox(int a);
int main()
{
	int i=100;
	dox(i);/*㊣dox()肚i*/ 
	printf("i:%d \n",i);
	/*printf("%d \n",a);△a琌dox()ㄧ计ま计 琌dox()跋办跑计 絛瞅ぃ猭*/
	return 0;
	
 } 
void dox(int a)
{
	printf("a:%d \n",a);
}
 
