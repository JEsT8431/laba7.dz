#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    char f; float a, b, c;
    printf("Фигура (t/s/o/r): "); scanf(" %c", &f);

    switch (f) {
    case 't': scanf("%f %f %f", &a, &b, &c); printf("%.2f\n", (a + b + c) / 2); break;
    case 's': scanf("%f", &a); printf("%.2f\n", a * a); break;
    case 'o': scanf("%f", &a); printf("%.2f\n", 3.14159 * a * a); break;
    case 'r': scanf("%f %f", &a, &b); printf("%.2f\n", a * b); break;
    }
    return 0;
}