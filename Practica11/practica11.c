#include <stdio.h>
int main (void){
    float peso[5], sum;
    int mayor=0, menor=0;
    printf("Ingresaremos el peso de 5 personas para organizarlos.\n");
    for (int i = 0; i < 5; i++)
    {
        do
        {
            printf("Ingrese el peso de la persona %d\n", i+1);
            scanf("%f", &peso[i]);
            if (peso[i]<=0)
            {
                printf("El peso ingresado no es valido\n");
            }
        } while (peso[i]<=0);
    sum = sum + peso[i];
    }
    sum = sum / 5;
    for (int i = 0; i < 5; i++)
    {
        if (peso[i]>=sum)
        {
            mayor = mayor + 1;
        }else if (peso[i]<sum)
        {
            menor = menor + 1;
        }        
    }
    printf("El promedio del peso de las 5 personas es %.2fkg, teniendo a %d por encima del promedio y a %d por debajo del promedio.\n", sum, mayor, menor);
    return 0;
}