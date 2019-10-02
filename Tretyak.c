#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
        float a,x,g,f,y;
        printf("Vvedite x: ");
        scanf ("%f", &x);
        printf("Vvedite a ");
        scanf ("%f", &a);
        g=5*(-10*a*a+27*a*x+28*x*x)/(5*a*a-9*a*x+4*x*x);
        printf("g=%f\n\n", g);

        printf("Vvedite x ");
        scanf ("%f", &x);
        printf("Vvedite a ");
        scanf ("%f", &a);
        f=sin(28*a*a-57*a*x+14*x*x);
        printf("f=%f\n\n", f);

	printf("Vvedite x ");
        scanf ("%f", & x);
        printf("Vvedite a ");
        scanf ("%f", & a);
        y=log(-27*a*a+24*a*x+35*x*x+1);
	printf("y=%f\n\n", y);
}
