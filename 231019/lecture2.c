#include<stdio.h>
#include<stdlib.h>

struct student {
    int sno;
    int name[10];
    int score;
};
int main() {
    //int* score;
    struct student* score;

    int count = 0;
    int sum = 0;
    float p = 0;

    printf("�л� �� �Է�");
    scanf_s("%d", &count);
    score = (struct student*)malloc(10 * sizeof(struct student));



    for (int i = 0; i < count; i++) {
        printf("�л� # %d-%d �й� �Է�", count, i + 1);
        scanf_s("%d", &(score[i].sno));
        printf("�л� # %d-%d �̸� �Է�", count, i + 1);
        scanf_s("%s", score[i].name, 10);
        printf("�л� # %d-%d ���� �Է�", count, i + 1);
        scanf_s("%d", &score[i].score);
        sum += score[i].score;
    }
    printf("���� : %d\n", sum);


    free(score);

    return 0;

}