#include<stdio.h>

int main()
{
	printf("��J�r��:");
	char c =getchar();/*�ޥ�getchar()��� �|�b�ϥΪ̫��Uenter��� �q�e���WŪ���@�Ӧr�� �X���x�s���ܼ�c*/ 
	printf("Ū�����r��:%c \n",c);
	return 0;
 } 

/*���Ѧr�����Ū�ϥ\�઺�禡 
scanf("%?",&?)
getchar() Ū���r�� �ñN����X  �|�b�ϥΪ̫��Uenter��� �q�e���WŪ�� 
putchar() ��ù��e���W��X���w���ܼƦr�����e  ����@�r������X�ܤ�K  
getche()  Ū���r�� �ñN����X��ܦb�ù��W 
getch()   Ū���r�� ������ܦb�ù��W ���|��ܿ�J���r�� �P�ɿ�J����K�۰ʵ����r����Ū��  

*getche() getch()�n�f�t���Y��conio.h�~�බ�Q�i��ޥ� 
 getchar()�Mgetche()���t�O getche()���ݭn�A�g�Lenter��N�৹����J
 getche()�Mgetch()���t�O getch()���|��ܩ�Ū�����r��=�A�ݤ����ҿ�J���r�� */ 
