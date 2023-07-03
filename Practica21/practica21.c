#include <stdio.h>
#include <math.h>
int main (void){
    struct cilindro{
        float diametro;
        float carrera;
    };
    struct motor{
        int numerador;
        struct cilindro cilindro1;
        int ncilindros;
        float cilindrada;
    };
    struct motor motor1;
    do
    {
        printf("Ingrese el identificador del motor\n");
        scanf("%d", &motor1.numerador);
        if (motor1.numerador<0)
        {
            printf("El dato ingresado no es valido\n");
        }
        
    } while (motor1.numerador<0);
    do
    {
        printf("Ingrese el diametro del cilindro del motor en milimetros\n");
        scanf("%f", &motor1.cilindro1.diametro);
        if (motor1.cilindro1.diametro<=0)
        {
            printf("El dato ingresado no es valido\n");
        }
        
    } while (motor1.cilindro1.diametro<=0);
    do
    {
        printf("Ingrese la carrera cilindro del motor en milimetros\n");
        scanf("%f", &motor1.cilindro1.carrera);
        if (motor1.cilindro1.carrera<=0)
        {
            printf("El dato ingresado no es valido\n");
        }
        
    } while (motor1.cilindro1.carrera<=0);
    do
    {
        printf("Ingrese el numero de cilindros\n");
        scanf("%d", &motor1.ncilindros);
        if (motor1.ncilindros<=0)
        {
            printf("El dato ingresado no es valido\n");
        }
        
    } while (motor1.ncilindros<=0);
    
    motor1.cilindrada = (motor1.ncilindros*(motor1.cilindro1.carrera)*M_PI*pow((motor1.cilindro1.diametro),2))/4;
    printf("Identificador: %d\n", motor1.numerador);
    printf("Diametro: %.2fmm\n", motor1.cilindro1.diametro);
    printf("Carrera: %.2fmm\n", motor1.cilindro1.carrera);
    printf("Numero de cilindros: %d\n", motor1.ncilindros);
    printf("Cilindrada: %.2f\n", motor1.cilindrada);  
    return 0;
}