#include <stdio.h>
#include <math.h>

int main()
{
	double A, B, C, p, area, perimetro;

	scanf("%lf %lf %lf", &A, &B, &C);
	
	if(A+B>C && A+C>B && B+C>A){
	    perimetro = A+B+C;
	    printf("Perimetro = %.1lf\n", perimetro);
	    
	}
	else{
	    area = ((A+B)*C)/2;
	    printf("Area = %.1lf\n", area);
	}

}