typedef struct guerreiro
{
    int ataque;
    int defesa;
    int carisma;
    int pontos_vida;
    int id_jogador;
} Guerreiro;

int rolaDados()
{
    int dado1, dado2, dado3;

    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    dado3 = rand() % 6 + 1;

    return dado1 + dado2 + dado3;
}

int bonusCarisma(int x)
{

    if (x == 18)
    {
        return 3;
    }
    else if (x >= 16 && x <= 17)
    {
        return 2;
    }
    else if (x >= 14 && x <= 15)
    {
        return 1;
    }
    else if (x >= 6 && x <= 7)
    {
        return -1;
    }
    else if (x >= 4 && x <= 5)
    {
        return -2;
    }
    else if (x == 3)
    {
        return -3;
    }
    else
        return 0;
}

void criaGuerreiro(Guerreiro *g)
{
    g->ataque = rolaDados();
    g->defesa = rolaDados();
    g->carisma = rolaDados();
    g->pontos_vida = rolaDados() + rolaDados() + rolaDados();
}

void ataca(Guerreiro *ataca, Guerreiro *defende)
{
    int golpe = rolaDados() + ataca->ataque + bonusCarisma(ataca->carisma);
    int escudo = rolaDados() + defende->defesa + bonusCarisma(defende->carisma);
    int dano = golpe - escudo;
    if (dano > 0)
    {
        defende->pontos_vida -= dano;
        if (defende->pontos_vida <= 0)
        {
            printf("Guerreiro %d venceu!\n", ataca->id_jogador);
            exit(0);
        }
    }
}
