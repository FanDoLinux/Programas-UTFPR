#include <stdio.h>
#include "lista.h"

int main()
{
    int size, chave;
    scanf("%d", &size);
    Lista *L1 = criar_lista();
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &chave);
        inserir_ordenado(L1, chave);
    }
    imprimir_lista(L1);

    scanf("%d", &size);
    Lista *L2 = criar_lista();
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &chave);
        inserir_ordenado(L2, chave);
    }
    imprimir_lista(L2);
    Lista *L3 = intercala_ordenado(L1, L2);
    imprimir_lista(L3);

    liberar_lista(L1);
    liberar_lista(L2);
    liberar_lista(L3);

    return 0;
}