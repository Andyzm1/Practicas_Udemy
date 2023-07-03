#include <stdio.h>
#include <stdlib.h>
int main (void){
    struct producto
    {
        int codigo;
        char info[100];
        float precio;
    };
    struct producto *produ;
    produ = malloc(sizeof(struct producto)); 
    do
    {
        printf("Ingrese el codigo del producto\n");
        scanf("%d", &produ->codigo);
        if (produ->codigo<0)
        {
            printf("Codigo invalido\n");
        }
        
    } while (produ->codigo<0);
    printf("Ingrese que tipo de producto es: ");
    scanf("%s", produ->info);
    do
    {
        printf("Ingrese el precio del producto\n");
        scanf("%f", &produ->precio);
        if (produ->precio<=0)
        {
            printf("Precio invalido\n");
        }
    } while (produ->precio<=0);
    
    printf("Producto: %s\nCodigo: %d\nPrecio: $%.2f\n", produ->info, produ->codigo, produ->precio);
    free(produ);
    return 0;
}