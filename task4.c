#include <stdio.h>

int main(void) {
    double tirazh;
    double result = 0;
    printf("Введите тираж: ");
    scanf("%lf", &tirazh);
    printf("Тираж: %.0f\n", tirazh);
    if (tirazh <= 10000) {
        result = tirazh * 0.10;
        printf("Ступень 1: %.2f\n", result);
    }
    else if (tirazh <= 50000) {
        result = 10000 * 0.10 + (tirazh - 10000) * 0.12;
        printf("Ступень 1: 1000.00\n");
        printf("Ступень 2: %.2f\n", (tirazh - 10000) * 0.12);
    }
    else {
        result = 10000 * 0.10 + 40000 * 0.12 + (tirazh - 50000) * 0.15;
        printf("Ступень 1: 1000.00\n");
        printf("Ступень 2: 4800.00\n");
        printf("Ступень 3: %.2f\n", (tirazh - 50000) * 0.15);
    }
    printf("Итого: %.2f\n", result);
    return 0;
}