#include <stdio.h>
int main (void){
    int km=0, consumo=0, op;
    float precio=0;
    printf("Bienvenido al sistema de autos de segunda mano.\n");
    do
    {
       do
    {
        printf("Ingrese el precio base del auto\n");
        scanf(" %f", &precio);
    } while (precio<0);
    do
    {
        printf("Ingrese el kilometraje del auto sin decimales\n");
        scanf(" %d", &km);
    } while (km<0);
    do
    {
        printf("Ingrese el consumo del auto sin decimales\n");
        scanf(" %d", &consumo);
    } while (consumo<0);
    if (km<=20000 && consumo<=5)
    {
        precio= precio + (precio*0.2);
    }else if (km>=20000 && consumo<=5)
    {
        precio= precio + (precio*0.1);
    }else if (consumo>5)
    {
        precio= precio + (precio*0.05);
    }
    
    printf("El precio del auto seria $%.2f\n", precio);
     do
    {
        printf("Desea saber el precio de otro auto.\n 1. Si\n 2. No\n");
        scanf("%d", &op);
        if (op==2)
        {
            printf("Gracias por usar el sistema de autos de segunda mano.\n");
        }
        if (op != 1 || op != 2)
        {
           printf("Opcion inexistente\n");
        }
        
    } while (op!=2);

    } while (op!=2);
    
    return 0;
}