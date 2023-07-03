#include <stdio.h>

int main(void) {
    int sum = 0, num;
    FILE *f;
    f = fopen("numeros.txt", "r");
    
    if (f == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    
    while (fscanf(f, "%d", &num) == 1) {
        sum += num;
    }

    printf("La suma de todos los numeros del archivo es: %d\n", sum);

    fclose(f);
    return 0;
}