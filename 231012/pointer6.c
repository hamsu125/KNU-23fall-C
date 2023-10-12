#include <stdio.h>
void swap(int* p1, int* p2)
{
	int test = *p1;
	*p1 = *p2;
	*p2 = test;
}

void sort(int *p)
{
	int i, j, temp;
	for (i = 0; i < 5 - 1; i++) {
		for (j = i + 1; j < 5; j++) {
			if (*(p + i) > *(p + j)) {
				int* pi = *(p + i);
				int* pj = *(p + j);
				swap(&pi, &pj);
			}
		}
	}
}

int main()
{
	int arr[5] = { 5, 7, 2, 3, 4 };
	int* p_arr = arr[5];
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	sort(arr);
	for (int i = 0; i < 5 - 1; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (arr[i] > arr[j]) {
				int test = arr[i];
				arr[i] = arr[j];
				arr[j] = test;

			}
		}
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
}