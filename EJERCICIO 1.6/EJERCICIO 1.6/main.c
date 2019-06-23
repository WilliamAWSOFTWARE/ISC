#include <stdio.h>
#include <stdlib.h>

// Las entradas de este ejercicio tenian que ser la velocidad maxima y el tiempo de respuesta -10
int v,d;
int main()
{
    printf("Ingrese la velocidad en m/s:");
    scanf("%d", &v);
    printf("Ingrese la distancia en metros:");
    scanf("%d", &d);
    printf("El tiempo es de: %.2f", (2*v)/d);

}
