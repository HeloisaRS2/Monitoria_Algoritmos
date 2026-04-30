#include <stdio.h>

int main()
{
    int A, min,horas, seg, hh, mm;
    
    scanf("%d", &A);
    
    horas = A/3600;
    hh = A%3600;
    
    min = hh/60;
    mm = hh%60;
    
    seg = mm;
    
    printf("%d:%d:%d\n", horas, min, seg);

    return 0;
}