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

    printf("학생 수 입력");
    scanf_s("%d", &count);
    score = (struct student*)malloc(10 * sizeof(struct student));



    for (int i = 0; i < count; i++) {
        printf("학생 # %d-%d 학번 입력", count, i + 1);
        scanf_s("%d", &(score[i].sno));
        printf("학생 # %d-%d 이름 입력", count, i + 1);
        scanf_s("%s", score[i].name, 10);
        printf("학생 # %d-%d 성적 입력", count, i + 1);
        scanf_s("%d", &score[i].score);
        sum += score[i].score;
    }
    printf("총점 : %d\n", sum);


    free(score);

    return 0;

}