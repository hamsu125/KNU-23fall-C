#include <stdio.h>
int main(void)
{
	int yy;
	printf("�⵵�� �Է��ϼ��� : ");
	scanf_s("%d", &yy);
	if (yy % 4 == 0 && yy%100 !=0 || yy % 400 == 0) printf("�����Դϴ�.");
	else printf("������ �ƴմϴ�.");
	return 0;
	
}