#include <stdio.h>
#include <math.h>

int treugolnik(int n) {
    int t = 1 + 8 * n;
    int gena = (int)sqrt(t);
    if (gena * gena == t) {
        return 1;
    }
    return 0;
}
int main(void) {
    int num;
    int count1 = 0, count2 = 0;
    long sum1 = 0, sum2 = 0;
    printf("Вводите числа (0 — конец):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0)
            break;
        if (treugolnik(num)) {
            count1++;
            sum1 = sum1 + num;
        } 
        else {
            count2++;
            sum2 = sum2 + num;
        }
    }
    printf("Треугольных: %d, среднее: %.2f\n", count1, count1 ? (double)sum1 / count1 : 0);
    printf("Остальных: %d, среднее: %.2f\n", count2, count2 ? (double)sum2 / count2 : 0);
    return 0;
}