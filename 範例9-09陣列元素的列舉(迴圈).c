#include<stdio.h>

int main()
{
	int i;
	int x[6]={100,200,300,400,500,600};
	for(i=0;i<6;i++)
	{
		printf("%d,",x[i]);
	}
	return 0;
}

/*由索引值列舉陣列元素→在迴圈中逐一改變指定的變數值 將變數指定為陣列的索引*/  
