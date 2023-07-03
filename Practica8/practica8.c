#include <stdio.h>
int main (void){
    int num;
    for (num = 0; num <= 100; num++)
    {
        if (num % 3 == 0)
        {
            printf("%d es multiplo de 3\n", num);
        }
        
    }
    return 0;
}