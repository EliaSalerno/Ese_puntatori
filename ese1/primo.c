#include <stdio.h>
#include <math.h>

int soluzioni(double a, double b, double c, double *x1, double *x2);

int main(void){
	printf("Inserisci i tre coefficienti dell'equazione\n");
	double a,b,c;
	scanf("%lf%lf%lf",&a, &b, &c);
	double x1,x2;
	if(soluzioni(a,b,c,&x1,&x2))
		printf("Le soluzioni reali dell'equazione sono: %g e %g\n", x1,x2);
	else
		printf("L'equazione non ha soluzioni reali\n");
}

int soluzioni(double a, double b, double c, double *x1, double *x2){
	double delta=b*b-4*a*c;
	int soluzioniReali=0;
	if(delta>0){
		*x1=(-b+sqrt(delta))/(2*a);
		*x2=(-b-sqrt(delta))/(2*a);
		soluzioniReali=1;
	}
	return soluzioniReali;
}
