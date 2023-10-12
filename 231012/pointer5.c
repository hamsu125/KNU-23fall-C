#include <stdio.h>

void swap(int* p1, int* p2)
{
	int test = *p1;
	*p1 = *p2;
	*p2 = test;

}
int main()

{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("num1 : %d\nnum2 : %d\n", num1, num2);
	swap(&num1, &num2);
	printf("------------------------\n");
	printf("num1 : %d\nnum2 : %d\n", num1, num2);
}