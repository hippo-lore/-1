#include <stdio.h>

int main() {
    int t1, t2, t3;
    float total_speed, result;

    scanf("%d %d %d", &t1, &t2, &t3);

    total_speed = (1.0 / t1) + (1.0 / t2) + (1.0 / t3);
    result = 1.0 / total_speed;

    printf("%.2f\n", result);

    return 0;
}
