#include <stdio.h>
#include <math.h>
void soluzioni(double a, double b, double c, double *re1, double *im1, double *re2, double *im2);
int main(void){
	printf("Inserisci i tre coefficienti dellequazione\n");
	double a, b, c;
	scanf("%lf%lf%lf",&a, &b, &c);
	double re1, im1, re2, im2;
	soluzioni(a, b, c, &re1, &im1, &re2, &im2);
	printf("Le soluzioni dellequazione sono: %g +i %g e %g + i %g\n", re1, im1, re2, im2);
}

void soluzioni(double a, double b, double c, double *re1, double *im1, double *re2, double *im2){
	double delta=b*b-4*a*c;
	if(delta>0){
		*re1=(-b+sqrt(delta))/(2*a);
		*re2=(-b-sqrt(delta))/(2*a);
		*im1=0;
		*im2=0;
	}
	else{
		*re1=-b/(2*a);
		*im1=sqrt(-delta)/(2*a);
		*re2=*re1;
		*im2=-sqrt(-delta)/(2*a);
	}
}

