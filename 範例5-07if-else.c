#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d�O����\n",a);
	}
	else
	{
		printf("%d�O�_��\n",a);
	}
	return 0;
 } 

/*�P�_���̫��X�����G�L�׬Otrue/false���������X�^��
��if-else�]�t��q����X���G
  �p����󦡧P�_���̫᪺�B�⵲�G�Ofalse �h�|�L�������else���j�A���{���϶��̭���else�{���϶� 
  
  if-else�P�ˤ���ٲ��j�ḹ���{���ԭz 
if(if�P�_��)
{
	if�{���϶�;
	... 
} 
else
{
	else�{���϶�;
	...
}
*/
