#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1,n2,n3, resp;
    printf("Dijite el primer numero:\n");
    scanf("%d", &n1);
    printf("Dijite el segundo numero:\n");
    scanf("%d", &n2);
    printf("Dijite el tercer numero:\n");
    scanf("%d", &n3);
    resp=(n1+n2+n3)/3;
    printf("Promedio: %d", resp);

}
