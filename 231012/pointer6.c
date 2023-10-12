#include <stdio.h>
void sort(int *p)
{
	int i, j, temp;
	for (i = 0; i < 5 - 1; i++) {
		for (j = i + 1; j < 5; j++) {
			if (*(p + i) > *(p + j)) {
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}
}
int main()
{
	int arr[5] = { 5, 7, 2, 3, 4 };
	int* p_arr = arr[5];
	int temp;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	sort(arr);
	for (int i = 0; i < 5 - 1; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
}