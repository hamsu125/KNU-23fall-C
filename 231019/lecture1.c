#include<stdio.h>
#include<stdlib.h>

int main() {
    int student = 0, sum = 0;
    printf("�л��� �Է� : ");
    scanf_s("%d", &student);

    int* grade;
    grade = (int*)malloc(student * sizeof(int));
    for (int i = 0; i < student; i++) {
        printf("�л� %d-%d ���� �Է� : ", student, i + 1);
        scanf_s("%d", &grade[i]);
        sum += grade[i];
    }
    printf("���� : %d\n\n", sum);
    for (int i = 0; i < student; i++)
        printf("�л� %d-%d ���� ��� : %d\n", student, i + 1, grade[i]);
    printf("��� ���� : %.2f", (float)sum / student);
    free(grade);
    grade = NULL;

    return 0;

}