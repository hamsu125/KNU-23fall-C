#include <stdio.h>
void calculator(int sel, int num1, int num2);
void sum(double a, double b) {
	double result = a + b;
	printf("%lf + %lf : %lf", a, b, result);
}
void sub(double a, double b) {
	double result = a - b;
	printf("%lf - %lf : %lf", a, b, result);
}
void mul(double a, double b) {
	double result = a * b;
	printf("%lf * %lf : %lf", a, b, result);
}
void div(double a, double b) {
	double result = a / b;
	printf("%lf / %lf : %lf", a, b, result);
}

int main(void)
{
	int sel, num1, num2;

	printf("숫자 1을 입력하세요  : ");
	scanf_s("%d", &num1);
	printf("숫자 2를 입력하세요  : ");
	scanf_s("%d", &num2);
	
	printf("1.더하기 2.빼기 3.곱하기 4.나누기");
	scanf_s("%d", &sel);

	calculator(sel, num1, num2);
	return 0;
}
void calculator(int sel, int num1, int num2)
{
	if (sel == 1) sum(num1, num2);
	else if (sel == 2) sub(num1, num2);
	else if (sel == 3) mul(num1, num2);
	else if (sel == 4) div(num1, num2);

	
}


