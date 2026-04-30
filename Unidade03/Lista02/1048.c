#include <stdio.h>

int main() {
    float sal, nsal, reajuste;
    int porcentagem;

    scanf("%f", &sal);

    if (sal <= 400.00) {
        nsal = sal * 1.15;
        reajuste = nsal - sal;
        porcentagem = 15;
    } else if (sal <= 800.00) {
        nsal = sal * 1.12;
        reajuste = nsal - sal;
        porcentagem = 12;
    } else if (sal <= 1200.00) {
        nsal = sal * 1.10;
        reajuste = nsal - sal;
        porcentagem = 10;
    } else if (sal <= 2000.00) {
        nsal = sal * 1.07;
        reajuste = nsal - sal;
        porcentagem = 7;
    } else {
        nsal = sal * 1.04;
        reajuste = nsal - sal;
        porcentagem = 4;
    }

    printf("Novo salario: %.2f\n", nsal);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n", porcentagem);

    return 0;
}
