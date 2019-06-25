#include <stdio.h>
#include <stdlib.h>

// Las entradas de este ejercicio tenian que ser la velocidad maxima y el tiempo de respuesta -10(RESUELTO)
float v,da, t;
int main()
{
    //La pido en M/S para evitar la conversion de Km/h a m/s
    printf("Ingrese la velocidad maxima de la calle(m/s):");
    scanf("%d", &v);
    printf("Ingrese la velocidad de frenado(m/s):");
    scanf("%d", &da);
    printf("Ingrese tiempo de respuesta del conductor(segundos):");
    scanf("%d", &t);
    printf("El tiempo del semafaro es de: %.2f segundos\n", ((v/da)+t));

}
