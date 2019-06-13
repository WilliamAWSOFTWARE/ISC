#include <stdio.h>
#include <stdlib.h>
int n;
int main()
{
    do{
        if(n!=5){
            printf("MENU:\n1.a1x+a0\n2.a3x^3+a2x^2+a1x+a0\n3.a5x^5+a4x^4+a3x^3+a2x^2+a1x+a0\n4.a7x^7+a6^6+a5x^5+a4x^4+a3x^3+a2x^2+a1x+a0\n5.Salir");
            printf("\nDijite una opcion:");
            scanf("%d", &n);
        }
    switch(n){
        system("CLS");
        der1();
        break;
    case 2:
        system("CLS");
        der2();
        break;
    case 3:
        system("CLS");
        der3();
        break;

    case 4:
        system("CLS");
        der4();
        break;
    case 5:
        printf("Usted salio!!\n");
        break;
    default:
        printf("Ingrese un valor, correcto");
    }
    system("PAUSE");
    system("CLS");
    }while(n!=5);


}
