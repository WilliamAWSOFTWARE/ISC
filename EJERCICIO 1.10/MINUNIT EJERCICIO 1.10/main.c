#include <stdio.h>
#include <stdlib.h>
#include "milibreria.h"

int n;
int main()
{
    printf("Ingrese la cantidad de numeros a digitar:");
    scanf("%d", &n);
    printf("La desviacion estandar es: %.4f",promedio(n));
}

