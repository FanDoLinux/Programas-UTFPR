#include <stdio.h>
#include <string.h>

typedef struct aluno
{
    char nome[101];
    int *RA;
    float coef;
} Aluno;

int main(void)
{
    Aluno variavel;
    Aluno *ponteiro;

    ponteiro = &variavel;

    ponteiro->RA = 12345;
    ponteiro->coef = 0.65;
    strcpy(ponteiro->nome, "Roberto");

    return 0;
}