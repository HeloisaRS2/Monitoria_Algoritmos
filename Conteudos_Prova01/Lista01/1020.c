#include <stdio.h>

int main()
{
	int entrada, ano, resto, meses, dias;
	
	scanf("%d", &entrada);
	
	ano = entrada/365;
	resto = entrada%365;
	
	meses = resto/30;
	resto = resto%30;
	
	dias = resto/1;
	
	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);
	

	return 0;
}