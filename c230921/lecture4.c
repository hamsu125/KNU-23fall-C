#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int points = 1000000;
    int points_circle = 0;

    srand(time(NULL)); 

    for (int i = 0; i < points; i++) {
        double x = (double)rand() / RAND_MAX; 
        double y = (double)rand() / RAND_MAX;  

        double distance = x * x + y * y;

        if (distance <= 1) {
            points_circle++;
        }

        if (i % 10000 == 0) { 
            double pi = 4.0 * points_circle / (i + 1); 
            double progress = (double)(i + 1) / points * 100.0;
            printf("%.0f%% 진행 - 원주율 : %f \n", progress, pi);
        }
    }

    double pi = 4.0 * points_circle / points; 
    double progress = (double)points / points * 100.0;
    printf("최종 원주율: %f ", pi);
    
    printf("\n");

    return 0;
}
