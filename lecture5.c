#include <stdio.h>
int main(void)
{
	int yy;
	printf("년도를 입력하세요 : ");
	scanf_s("%d", &yy);
	if (yy % 4 == 0 && yy%100 !=0 || yy % 400 == 0) printf("윤년입니다.");
	else printf("윤년이 아닙니다.");
	return 0;
	
}