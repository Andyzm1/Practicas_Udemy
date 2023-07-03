#include <stdio.h>
int main (void){
    int op;
    float conver = 1.09, cant;
    printf("Bienvenido al conversor de euros a dolares\n");
    do
    {
        printf("Seleccione una opcion\n 1. Convertir de euros a dolares\n 2. Convertir de dolares a euros\n 3. Salir\n");
        scanf(" %d", &op);
        switch (op)
        {
        case 1:
            do {
                printf("Ingrese la cantidad de euros que desea convertir a dolares.\n");
                scanf("%f", &cant);
                if (cant<0)
                {
                    printf("La cantidad ingresada no es valida.\n");
                }
            } while(cant<0);
            cant = cant * conver;
            printf("La conversion seria de $%.2f\n", cant);
            break;
        case 2:
            do
            {
                printf("Ingrese la cantidad de dolares que desea convertir a euros.\n");
                scanf("%f", &cant);
                if (cant<0)
                {
                    printf("La cantidad ingresada no es valida.\n");
                }
                
            } while (cant<0);
            cant = cant / conver;
            printf("La conversion seria de %.2f EUR.\n", cant);
            break;
        case 3:
            printf("Gracias por usar el sistema de conversion.\n");
            break;
        default:
            printf("Opcion invalida\n");
            break;
        }
    } while (op != 3);
    
    
    return 0;
}