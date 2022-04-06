#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salary, valor_fixo, preco_km, km, tarifa;
    int vai;

    scanf("%lf %lf %lf %lf %d", &salary, &valor_fixo, &preco_km, &km, &vai);

    tarifa = valor_fixo + (preco_km * km);

    if (vai == 1)
    {
        tarifa += (tarifa * 0.1);
    }

    if ((salary * 0.3) > tarifa)
    {
        printf("Vai poder viajar.\n%.2lf\n%.2lf\n", tarifa, (salary * 0.3) - tarifa);
    }
    else
    {
        printf("Não vai poder viajar.\n%.2lf\n", tarifa - (salary * 0.3));
    }

    return 0;
}

// https://www.thehuxley.com/problem/3895?quizId=7484