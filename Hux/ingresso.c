#include <stdio.h>
#include <stdlib.h>

int main()
{
    float day, student, socio, value;

    scanf("%f %f %f", &day, &student, &socio);

    if (day >= 1 && day < 5)
    {
        value = 15;
        if (student == 0 && socio == 0)
        {
            printf("COMUM: R$ %.2f\n", value);
        }
        else if (day <= 4 && student == 1)
        {
            value -= (value * 0.3);
            printf("ESTUDANTE: R$ %.2f\n", value);
        }
        else if (socio == 1)
        {
            printf("SOCIO: R$ %.2f\n", value);
        }
    }
    else if (day >= 5)
    {
        value = 30;
        if (student == 0 && socio == 0)
        {
            printf("COMUM: R$ %.2f\n", value);
        }
        else if (socio == 1)
        {
            value -= (value * 0.2);
            printf("SOCIO: R$ %.2f\n", value);
        }
        else if (student == 1)
        {
            value -= (value * 0.3);
            printf("ESTUDANTE: R$ %.2f\n", value);
        }
    }

    return 0;
}

// https://www.thehuxley.com/problem/3777?quizId=7484