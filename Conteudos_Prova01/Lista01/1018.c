#include <stdio.h>

int main()
{
    int A, Cem, C, cinquenta, cinq, vinte, v, dez, d, cinco, cinc, dois, two, um, u;
    
    scanf("%d", &A);
    
    Cem = A/100;
    C = A%100;
    
    cinquenta = C/50;
    cinq = C%50;
    
    vinte = cinq/20;
    v = cinq%20;
    
    dez = v/10;
    d = v%10;
    
    cinco = d/5;
    cinc = d%5;
    
    dois = cinc/2;
    two = cinc%2;
    
    um = two/1;
    u = two%1;

    printf("%d\n", A);
    printf("%d nota(s) de R$ 100,00\n", Cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

  return 0;
}