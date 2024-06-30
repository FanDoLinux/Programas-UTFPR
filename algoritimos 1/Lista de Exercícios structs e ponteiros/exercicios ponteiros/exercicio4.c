/*Implemente uma func¸ao que receba duas vari ˜ aveis do tipo ´ char. A func¸ao dever ˜ a retornar a ´
variavel que tiver o menor valor de enderec¸o. */

#include <stdio.h>

char funcao(char *a, char *b);

int main()
{

    char a = 't', b = 'z';
    printf("%d\n", &a);
    printf("%d\n", &b);
    printf("A variavel com menor valor de endereco eh: %c\n", funcao(&a, &b));

    return 0;
}

char funcao(char *a, char *b)
{

    if ((int)a < (int)b)
    {
        return *a;
    }
    else
        return *b;
}