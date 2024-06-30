#include <stdio.h>

int main(void)
{
    char a, b;
    char *pa, *pb;
    pa = &a;
    pb = &b;
    if (pa == pb)
        printf("Enderecos iguais.\n");
    else
        printf("Enderecos diferentes.\n");
    return 0;
}