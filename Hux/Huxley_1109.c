#include <stdio.h>

void receber(int i, int j, int k, int programa, int linhas, int dia, int maior, int maiorl)
{
    if (i == 7)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", j);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", k);
        if (dia == 0)
        {
            printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
        }
        else if (dia == 1)
        {
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
        }
        else if (dia == 2)
        {
            printf("DIA QUE MAIS PRODUZIU: TERCA\n");
        }
        else if (dia == 3)
        {
            printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
        }
        else if (dia == 4)
        {
            printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
        }
        else if (dia == 5)
        {
            printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
        }
        else if (dia == 6)
        {
            printf("DIA QUE MAIS PRODUZIU: SABADO\n");
        }

        return;
    }
    else
    {
        int progr, linhas;
        scanf("%d\n%d", &progr, &linhas);

        if (progr >= 5 && linhas >= 100)
        {
            j++;
            k++;
        }
        else if (progr >= 5 && linhas < 100)
        {
            j++;
        }
        else if (progr < 5 && linhas >= 100)
        {
            k++;
        }
        if (progr >= maior && linhas >= maiorl)
        {
            maior = progr;
            maiorl = linhas;
            dia = i;
        }
        receber(i + 1, j, k, programa, linhas, dia, maior, maiorl);
    }
}

int main()
{

    receber(0, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}