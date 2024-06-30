/*Inicie um variavel e um ponteiro do tipo ´ int. Em seguida, fac¸a o ponteiro apontar para o
enderec¸o da variavel.*/

#include <stdio.h>

int main()
{

    int i;
    int *p_i;
    p_i = &i;
    i = 10;

    printf("%d\n", *p_i);

    return 0;
}