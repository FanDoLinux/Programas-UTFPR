/*3. Defina uma struct para retangulo, para qual deve conter o comprimento de cada aresta. Em ˆ
seguida, implemente func¸oes que atendam as seguintes especificac¸ ˜ oes: ˜
a) - Inicializar a estrutura.
b) - Instanciar a estrutura.
c) - Imprimir o conteudo da estrutura. ´
d) - Area do ret ´ angulo. ˆ
e) - Uma func¸ao que receba dois ret ˜ angulos e retorne um terceiro com a soma das arestas. */

#include <stdio.h>

typedef struct retangulo
{
    int largura;
    int altura;
} Retangulo;
void imprimirStruct(Retangulo x);
Retangulo inicializarStruct(int l, int a);
Retangulo instanciarStruct(Retangulo x);
int areaRetangulo(Retangulo x);
Retangulo somaDeRetangulos(Retangulo x, Retangulo y);

int main()
{
    Retangulo R1 = inicializarStruct(3, 6);
    imprimirStruct(R1);
    Retangulo R2 = instanciarStruct(R1);
    imprimirStruct(R2);
    printf("\nArea do retangulo %d", areaRetangulo(R1));
    Retangulo R3 = somaDeRetangulos(R1, R2);
    imprimirStruct(R3);

    return 0;
}

Retangulo inicializarStruct(int l, int a)
{
    Retangulo x = {l, a};
    return x;
}

void imprimirStruct(Retangulo x)
{
    printf("\nRetangulo: largura: %d", x.largura);
    printf("\nRetangulo: altura: %d", x.altura);
}

Retangulo instanciarStruct(Retangulo x)
{
    Retangulo y;

    y.altura = x.altura;
    y.largura = x.largura;
    return y;
}

int areaRetangulo(Retangulo x)
{
    return x.altura * x.largura;
}

Retangulo somaDeRetangulos(Retangulo x, Retangulo y)
{
    Retangulo r;

    r.altura = x.altura + y.altura;
    r.largura = x.largura + y.largura;
    return r;
}