/*���U��²�檺I/O�d�� �䤤�ܽd�F���㪺��ƿ�X�M��J�ާ@ 
  I/O ��ƪ���J�M��X */
  
/*C�y�� int main() �M int main(void) ���t�O??�H
int main(void) �����O����ƪ��ѼƬ��šA����ǤJ�Ѽ�??�A�p�G�A�ǤJ�ѼơA�N�|�X���C
int main() ��ܥi�H�ǤJ�ѼơC
//�o�ˬO���̪�
int main()
{
  if (0) main(42);
}

// �o�˷|�X��
int main(void)
{
  if (0) main(42);
}*/
   
#include<stdio.h>
int main(void)
{
	char s[12];/*char �n���r�ū��ܶq�Ψ�� ���F��char�Ϊk*/
	printf("�п�J�W��:");
	gets(s);/*gets()����� �����ϥΪ̿�J����� �ñN���x�s��s�ܼ�*/ 
	printf("Hello,%s \n",s);/*\n  New Line�A����Ÿ�*//*�Hs�Ψӿ�X�@�Ӧr�Ŧ�A*/ 
	return 0;
}
	
	
