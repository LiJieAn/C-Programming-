#include<stdio.h>
#define ASIZE 6/*�N��}�C�ҫŧi�����׬�6*/ 
/*�Q��#define���O �b���Y�ɹw���w�q�`�ƦW�� �N��ҭn�ŧi���}�C���� �u�n�����o�ӭ� �N�i�קK���ޭȶW�X�d����ɪ����~*/ 

void setArray(int inta[]);
int main(void)
{
	int i=0;
	int x[6];
	printf("�п�J�}�C����:\n");
	do{
		scanf("%d",&x[i]);
		i++;
	}while(i<ASIZE);
	i=0;
	printf("�H�U����J�����e:\n");
	do{
		printf("%d,",x[i]);
		i++;
	}while(i<ASIZE) ;
	return 0;
	
		
 } 
/*���F�Hconst�ŧi���`�� �t�@�ت�ܱ`�ƪ���k �����Y�H #define �w���w�q�B�z
  �y�k:#define x 100*/
 /*do-while
�y�k
do
{
	�j��϶��{���ԭz
}while(�{���P�_��) ;
����rdo�w�qwhile�j��}�l ��while�j��P�_���h�b�j�鵲���ɰ���B�� 
�Y���G�Ȭ�true �o�Ӱj��|�A�@������ �_�h���X�j�� */
