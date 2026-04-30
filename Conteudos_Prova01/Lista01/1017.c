int main()
{
    double valorGasto, horas, km;
    
    scanf("%lf", &horas);
    scanf("%lf", &km);


    valorGasto = ((km)*horas/12);
    
    printf("%.3lf\n", valorGasto);

    return 0;
}