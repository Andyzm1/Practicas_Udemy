#include <stdio.h>
void multivect(int *vec, int num){
    for (int i = 0; i < 10; i++)
    {
        vec[i]= vec[i] * num;
    }
    printf("El nuevo vector multiplicado por %d es: ", num);
    for (int i = 0; i < 10; i++)
    {
        printf(" %d |", vec[i]);
    }
}
int main (void){
    int num;
    int vec[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el %d^ numero para el vector: ", i+1);
        scanf("%d", &vec[i]);
    }
    printf("Vector=");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d |", vec[i]);
    }
    printf("\n");
    printf("Ingrese un numero para multiplicar al vector: ");
    scanf("%d", &num);
    printf("\n");
    multivect(vec, num);
    return 0;
}