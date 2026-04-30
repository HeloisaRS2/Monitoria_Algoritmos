#include <stdio.h>

int main()
{
    int km;
    double litros, total;
    
    scanf("%d %lf", &km, &litros);
    
    total = km/litros;
    
    printf("%.3lf km/l\n", total);
    
    return 0;
}