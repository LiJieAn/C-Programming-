#include<stdio.h>
#include<conio.h>

int main()
{
	char che[6];/*�ŧi�@��char���A���}�C �x�s��J���r��*/ 
	int i=0;
	printf("��J5�Ӧr���K�X:");
	for(i=0;i<5;i++)
	/*for�j�� ���椭�� �C�@���n�D�ϥΪ̿�J�@�ӱK�X�r�� 
	�]getch()���|��ܩ�Ū�����r��=�A�ݤ����ҿ�J���r��
	��J������ �L�|����U�@�Ӱj�鵥�ݨϥΪ̿�J�U�@�Ӧr��
	�@��������������@�r����J ���X�j�� �N�@�Ӧr�굲���r�����w���}�C���̫�@�Ӥޯ���m*/ 
	{che[i] = getch();
		}	
	che[5]='\0';
	printf("\n��J���r��:%s\n",che);
	return 0;
 } 
/*�`�N�b�Ĥ��Ӧr���������ɭ� �{���|�۰ʵ�����J �������
  getch()���|��� ��J���r�� �P�ɿ�J����K�۰ʵ����r����Ū�� 
 
 /*���Ѧr�����Ū�ϥ\�઺�禡 
scanf("%?",&?)
getchar() Ū���r�� �ñN����X  �|�b�ϥΪ̫��Uenter��� �q�e���WŪ�� 
putchar() ��ù��e���W��X���w���ܼƦr�����e  ����@�r������X�ܤ�K 
getche()  Ū���r�� �ñN����X��ܦb�ù��W 
getch()   Ū���r�� ������ܦb�ù��W ���|��ܿ�J���r�� �P�ɿ�J����K�۰ʵ����r����Ū��  

*getche() getch()�n�f�t���Y��conio.h�~�බ�Q�i��ޥ� 
 getchar()�Mgetche()���t�O getche()���ݭn�A�g�Lenter��N�৹����J 
 getche()�Mgetch()���t�O getch()���|��ܩ�Ū�����r��=�A�ݤ����ҿ�J���r�� 
*/  
