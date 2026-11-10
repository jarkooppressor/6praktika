#include <stdio.h>
#include <math.h>

int main(void) {
    int c;
    int count = 0;
    int pchelka;
    while ((c = getchar()) != '#') {
        pchelka = (int)sqrt(c);
        if (pchelka * pchelka == c) {
            count++;
        }
    }
    printf("Количество символов, чей ASCII код является полным квадратом: %d\n", count);
    return 0;
}