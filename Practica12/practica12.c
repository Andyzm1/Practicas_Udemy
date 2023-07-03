#include <stdio.h>
int main (void){
    int vec[10] = { 2, 5, -67, 20, 30, 7, 9, -25, 9, -23};
    int mayor, menor;
    for (int i = 0; i < 10; i++)
    {
        if (vec[i]>mayor)
        {
            mayor = vec[i];
        }
        if (vec[i]<menor)
        {
            menor = vec[i];
        }
    }
    printf("El valor maximo del vector es %d y el minimo es %d", mayor, menor);
    return 0;
}