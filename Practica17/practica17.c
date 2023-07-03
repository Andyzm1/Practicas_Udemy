#include <stdio.h>
int main (void){
    int reales[5];
    float media = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el %d^ numero para el arreglo: ", i+1);
        scanf("%d", &reales[i]);
    }
    printf("Reales ingresados=");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d |", reales[i]);
    }
    printf("\n");
    int *puntero = &reales[0];
    for (int i = 0; i < 5; i++) {
        media = media + *(puntero+i);
    }
    media = media / 5;
    printf("La media de los valores del vector es: %.2f\n", media);
    return 0;
}