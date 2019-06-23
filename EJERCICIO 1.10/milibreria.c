#include "milibreria.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float  prom=0,numero=0, suma=0, sumatoria=0,num[1],totalsum=0,numero2=0;
int i=0,d=0;

// Nombrar funcion adecuadamente -10
// Evitar uso de printf -5
float promedio(float n){
    for(i=0;i<n;i++){
        printf("Ingrese el Numero en l posicion %d: ", i);
        scanf("%f",&numero);
        num[i]=numero;
        suma+=num[i];
    }
    system("CLS");
    prom=suma/n;
    i=0;
    while(n>=i){
        totalsum+=num[i];
        sumatoria+=pow((num[i]-prom),2);
        printf("Sumatoria Final progresiva de (%.2f-%.2f)^2=%.2f\n",num[i],prom, sumatoria);
        i++;
    }
    system("PAUSE");
    system("CLS");
    return sqrt((sumatoria/(n-1)));

}
