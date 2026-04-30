#include <stdio.h>

int main() {
    double valor;
    int N, resto;

    scanf("%lf", &valor);

    N = (int)(valor * 100 + 0.5);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", N / 10000);
    resto = N % 10000;

    printf("%d nota(s) de R$ 50.00\n", resto / 5000);
    resto %= 5000;

    printf("%d nota(s) de R$ 20.00\n", resto / 2000);
    resto %= 2000;

    printf("%d nota(s) de R$ 10.00\n", resto / 1000);
    resto %= 1000;

    printf("%d nota(s) de R$ 5.00\n", resto / 500);
    resto %= 500;

    printf("%d nota(s) de R$ 2.00\n", resto / 200);
    resto %= 200;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", resto / 100);
    resto %= 100;

    printf("%d moeda(s) de R$ 0.50\n", resto / 50);
    resto %= 50;

    printf("%d moeda(s) de R$ 0.25\n", resto / 25);
    resto %= 25;

    printf("%d moeda(s) de R$ 0.10\n", resto / 10);
    resto %= 10;

    printf("%d moeda(s) de R$ 0.05\n", resto / 5);
    resto %= 5;

    printf("%d moeda(s) de R$ 0.01\n", resto);

    return 0;
}
