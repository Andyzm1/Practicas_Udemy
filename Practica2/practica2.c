#include <stdio.h>
int main (void){
    char car1, car2, car3;
    int cont=1;
    printf("Ingrese el %d caracter\n", cont);
    scanf(" %c", &car1);
    cont+=1;
    printf("Ingrese el %d caracter\n", cont);
    scanf(" %c", &car2);
   cont+=1;
    printf("Ingrese el %d caracter\n", cont);
    scanf(" %c", &car3);
    printf("Los caracteres ingresados son %c | %c | %c", car1, car2, car3);
    return 0;
}