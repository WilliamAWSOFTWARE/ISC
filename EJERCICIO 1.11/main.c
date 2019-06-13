#include <stdio.h>
#include <stdlib.h>
#include "milibreria.h"
int n1,n2;
int main()
{
    printf("Ingrese un primer numero:");
    scanf("%d",&n1);
    printf("Ingrese un numero mayor al primero:");
    scanf("%d",&n2);
    printf(" Los pasos son:%d",fx(n1,n2));
    return 0;
}
