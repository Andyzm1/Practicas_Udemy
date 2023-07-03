#include <stdio.h>
int main (void){
    int base, altura, area;
    printf("Calcularemos el area de un rectangulo\n");
    do
    {
        printf("Ingrese la base del rectangulo\n");
        scanf(" %d", &base);
        if (base<=0)
        {
            printf("Dato para la base invalido\n");
        }
        
    } while (base<=0);
    do
    {
        printf("Ingrese la altura del rectangulo\n");
        scanf(" %d", &altura);
        if (altura<=0)
        {
            printf("Dato para la altura invalido\n");
        }
        
    } while (altura<=0);
    area = base * altura;
    printf("El area del rectangulo de base %d y altura %d es %d\n", base, altura, area);
    return 0;    
}