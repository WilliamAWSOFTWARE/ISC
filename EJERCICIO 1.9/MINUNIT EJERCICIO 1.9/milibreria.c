#include "milibreria.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int X, A0,A1, A2,A3, A4, A5, A6, A7;
int bin1(int A1, int X, int A0){
    return (A1*X)+A0;
}
int bin2(int A1, int X,int A0, int A2, int A3){
    return (A3*pow(X,3))+(A2*pow(X,2))+bin1(A1, X, A0) ;
}
int bin3(int A1, int X,int A0, int A2, int A3, int A5, int A4){
    return (A5*pow(X,5))+(A4*pow(X,4))+bin2(A1, X, A0, A2, A3) ;
}
int bin4(int A1, int X,int A0, int A2, int A3, int A5, int A4, int A6, int A7){
    return (A7*pow(X,7))+(A6*pow(X,6))+bin3( A1, X, A0, A2, A3, A5, A4);
}

int op1(){
    printf("Digite valor de X:");
    scanf("%d", &X);
    printf("Digite valor de A0:");
    scanf("%d", &A0);
    printf("Digite valor de A1:");
    scanf("%d", &A1);
    return bin1(A1,X,A0);
}
int op2(){
    printf("Digite valor de X:");
    scanf("%d", &X);
    printf("Digite valor de A0:");
    scanf("%d", &A0);
    printf("Digite valor de A1:");
    scanf("%d", &A1);
    printf("Digite valor de A2:");
    scanf("%d", &A2);
    printf("Digite valor de A3:");
    scanf("%d", &A3);
    return bin2(A1, X, A0,A2,A3);
}
int op3(){
    printf("Digite valor de X:");
    scanf("%d", &X);
    printf("Digite valor de A0:");
    scanf("%d", &A0);
    printf("Digite valor de A1:");
    scanf("%d", &A1);
    printf("Digite valor de A2:");
    scanf("%d", &A2);
    printf("Digite valor de A3:");
    scanf("%d", &A3);
    printf("Digite valor de A4:");
    scanf("%d", &A4);
    printf("Digite valor de A5:");
    scanf("%d", &A5);
    return bin3( A1, X,A0, A2, A3, A5, A4);
}
int op4(){
    printf("Digite valor de X:");
    scanf("%d", &X);
    printf("Digite valor de A0:");
    scanf("%d", &A0);
    printf("Digite valor de A1:");
    scanf("%d", &A1);
    printf("Digite valor de A2:");
    scanf("%d", &A2);
    printf("Digite valor de A3:");
    scanf("%d", &A3);
    printf("Digite valor de A4:");
    scanf("%d", &A4);
    printf("Digite valor de A5:");
    scanf("%d", &A5);
    printf("Digite valor de A6:");
    scanf("%d", &A6);
    printf("Digite valor de A7:");
    scanf("%d", &A7);
return bin4(A1, X, A0, A2, A3, A5, A4, A6,A7);
}
void der1(){
    printf("El resultado es:%d\t",op1());
    printf("La derivada es: %d\n",A1);
}
void der2(){
    printf("El resultado es: %d\t",op2());
    printf("La derivada es: %dx+%dx+%d\n",A3*3, A2*2, A1);

}
void der3(){
    printf("El resultado es:%d\t",op3());
    printf("La derivada es:%dx^4+%dx^3+%dx^2+%dx+%d\n",A5*5, A4*4,A3*3, A2*2, A1);
}
void der4(){
    printf("El resultado es:%d\t",op4());
    printf("La derivada es:%dx^6+%dx^5+%dx^4+%dx^3+%dx^2+%dx+%d\n",A7*7,A6*6,A5*5, A4*4,A3*3, A2*2, A1);
}
