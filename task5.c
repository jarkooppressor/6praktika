#include <stdio.h>
#include <math.h>

int main(void) {
    int vibor;
    double r, a, h, v;
    while (1) {
        printf("\n1. Сфера\n");
        printf("2. Куб\n");
        printf("3. Цилиндр\n");
        printf("4. Конус\n");
        printf("0. Выход\n");
        printf("Выбор: ");
        scanf("%d", &vibor);
        if (vibor == 0) {
            break;
        }
        switch (vibor) {
            case 1:
                printf("Радиус: ");
                scanf("%lf", &r);
                v = 4.0 / 3.0 * 3.14159 * r * r * r;
                printf("Объём = %.4f\n", v);
                break;
            case 2:
                printf("Сторона: ");
                scanf("%lf", &a);
                v = a * a * a;
                printf("Объём = %.4f\n", v);
                break;
            case 3:
                printf("Радиус и высота: ");
                scanf("%lf %lf", &r, &h);
                v = 3.14159 * r * r * h;
                printf("Объём = %.4f\n", v);
                break;
            case 4:
                printf("Радиус и высота: ");
                scanf("%lf %lf", &r, &h);
                v = 1.0 / 3.0 * 3.14159 * r * r * h;
                printf("Объём = %.4f\n", v);
                break;
            default:
                printf("Неверный выбор\n");
        }
    }
    return 0;
}