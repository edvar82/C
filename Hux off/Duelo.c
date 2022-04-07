#include <stdio.h>

int main()
{
    double myLevel, dano, enemyLevel, enemyLife, myMult, enemyMult, newDano, newLife;
    scanf("%lf %lf %lf %lf", &myLevel, &dano, &enemyLevel, &enemyLife);

    if (myLevel < 1 || enemyLevel < 1)
    {
        printf("Nivel abaixo\n");
    }
    else if (myLevel > 20 || enemyLevel > 20)
    {
        printf("Nivel acima\n");
    }
    else
    {
        if (myLevel >= 1 && myLevel < 6)
        {
            myMult = 1.2;
        }
        else if (myLevel >= 6 && myLevel < 11)
        {
            myMult = 1.5;
        }
        else if (myLevel >= 11 && myLevel < 16)
        {
            myMult = 1.8;
        }
        else
        {
            myMult = 2;
        }

        if (enemyLevel >= 1 && enemyLevel < 6)
        {
            enemyMult = 1.2;
        }
        else if (enemyLevel >= 6 && enemyLevel < 11)
        {
            enemyMult = 1.5;
        }
        else if (enemyLevel >= 11 && enemyLevel < 16)
        {
            enemyMult = 1.8;
        }
        else
        {
            enemyMult = 2;
        }

        newDano = myMult * dano;
        newLife = enemyMult * enemyLife;

        if (newDano > newLife)
        {
            printf("Personagem 1 venceu\nDano causado: %.2lf\n", newDano);
        }
        else
        {
            printf("Personagem 2 venceu\nVida restante: %.2lf\n", newLife - newDano);
        }
    }

    return 0;
}

// https://www.thehuxley.com/problem/3778?quizId=7484 <<-- Site