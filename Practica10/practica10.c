#include <stdio.h>
int main (void){
    int num=1, cont=0, sum=0;
    float prom;
    do
    {
        printf("Ingrese un numero\n");
        scanf("%d", &num);
        sum = sum + num;
        cont++;
    } while (num!=0);
    prom = sum / cont;
    printf("La suma de los numeros ingresados es %d, lo que nos da un promedio de %.2f.\n", sum, prom);
    return 0;
}