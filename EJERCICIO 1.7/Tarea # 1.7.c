#include <stdio.h>
#include <stdlib.h>
/*A	B
Primer mes	Enero
Segundo mes	Febrero
Tercer mes	Marzo
Cuarto mes	Abril
Quinto mes	Mayo
Sexto mes	Junio
Séptimo mes	Julio
Octavo mes	Agosto
Noveno mes	Septiembre
Décimo mes	Octubre
Décimo primer mes	Noviembre
Décimo segundo mes	Diciembre

Primavera: 1 marzo hasta 31 mayo.
Verano: 1 junio hasta 31 agosto.
Otoño: 1 septiembre hasta 30 noviembre.
Invierno: 1 diciembre hasta 28 febrero.


*/

int main()
{
    int dia, mes;
    printf("Digite el dia:");
    scanf("%d", &dia);
    printf("Digite el mes:");
    scanf("%d", &mes);

    if((dia>=1 || dia<=31) && (mes>=3 && mes<=5)){
        printf("ESTAMOS EN PRIMAVERA\n");
    }
    else if((dia>=1 || dia<=31) && (mes>=6 && mes<=8)){
        printf("ESTAMOS EN VERANO\n");
    }

    else if((dia>=1 || dia<=30) && (mes>=9 && mes<=11)){
        printf("ESTAMOS EN OTO%cO\n", 165);
    }
    else if((dia>=1 || dia<=28) && (mes==12 || mes<=2)){
        printf("ESTAMOS EN INVIERNO\n");
    }
    else{
        printf("Fecha ingresada no valida favor digitar fecha valida\n");
    }
    system("PAUSE");
}
