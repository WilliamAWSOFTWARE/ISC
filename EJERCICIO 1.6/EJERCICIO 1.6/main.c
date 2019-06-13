#include <stdio.h>
#include <stdlib.h>


int v,d;
int main()
{
    printf("Ingrese la velocidad en m/s:");
    scanf("%d", &v);
    printf("Ingrese la distancia en metros:");
    scanf("%d", &d);
    printf("El tiempo es de: %.2f", (2*v)/d);

}
