#include <stdio.h>
#include <stdlib.h>

int main()
{
int a = 125, b = 12345;

long ax = 1234567890;

short s = 4043;

float x = 2.13459;

double dx = 1.1415927;

char c = 'W';

unsigned long ux = 2541567890;

printf(" Los tipo Int son: %i y %i\n",a,b);
printf("El tipo long es: %lld\n", ax);
printf("El tipo short es: %d\n", s);
printf("El tipo float es: %f\n", x);
printf("El tipo double es: %f\n", dx);
printf("El tipo char es: %c\n", c);
printf("El tipo long sin signo es: %llu\n", ux);
}
