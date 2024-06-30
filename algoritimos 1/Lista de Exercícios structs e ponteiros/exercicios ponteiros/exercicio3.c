/* Implemente uma func¸ao que receba os n ˜ umeros inteiros ´ a, b e c por passagem de parametros ˆ
por referencia (uso de ponteiros). Na func¸ ˆ ao, o resultado da soma entre ˜ a e b devera ser ´
armazenada em c.*/

#include <stdio.h>

void funcao(int *a, int *b, int *c);

int main()
{
    int x = 10;
    int y = 20;
    int c;

    funcao(&x, &y, &c);

    printf("%d", c);

    return 0;
}

void funcao(int *a, int *b, int *c)
{
    *c = *a + *b;
    return;
}