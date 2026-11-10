#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    wint_t wc;
    int count = 0;
    while ((wc = getwchar()) != L'#') {
        if (wc == L'о') {
            count++;
        }
    }
    printf("Количество замен широкого символа L'о' на L'0': %d\n", count);
    return 0;
}