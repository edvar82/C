#include <stdio.h>

int casa1(int resto_pe, int resto_t, int resto_g, int resto_y, int resto_pa, int resto_v, int resto_e)
{
    int casa1_pe, casa1_t, casa1_g, casa1_y, casa1_pa, casa1_v, casa1_e, quant;
    quant = 0;
    casa1_pe = resto_pe - 1000;
    casa1_t = resto_t - 400;
    casa1_g = resto_g - 400;
    casa1_y = resto_y - 400;
    casa1_pa = resto_pa - 400;
    casa1_v = resto_v - 800;
    casa1_e = resto_e - 1000;

    if (casa1_pe >= 0)
    {
        quant++;
    }
    if (casa1_t >= 0)
    {
        quant++;
    }
    if (casa1_g >= 0)
    {
        quant++;
    }
    if (casa1_y >= 0)
    {
        quant++;
    }
    if (casa1_pa >= 0)
    {
        quant++;
    }
    if (casa1_v >= 0)
    {
        quant++;
    }
    if (casa1_e >= 0)
    {
        quant++;
    }
    return quant;
}
int casa2(int resto_pe, int resto_t, int resto_g, int resto_y, int resto_pa, int resto_v, int resto_e)
{
    int casa1_pe, casa1_t, casa1_g, casa1_y, casa1_pa, casa1_v, casa1_e, quant;
    quant = 0;
    casa1_pe = resto_pe - 200;
    casa1_t = resto_t - 800;
    casa1_g = resto_g - 1200;
    casa1_y = resto_y - 800;
    casa1_pa = resto_pa - 1200;
    casa1_v = resto_v - 1200;
    casa1_e = resto_e - 1800;

    if (casa1_pe >= 0)
    {
        quant++;
    }
    if (casa1_t >= 0)
    {
        quant++;
    }
    if (casa1_g >= 0)
    {
        quant++;
    }
    if (casa1_y >= 0)
    {
        quant++;
    }
    if (casa1_pa >= 0)
    {
        quant++;
    }
    if (casa1_v >= 0)
    {
        quant++;
    }
    if (casa1_e >= 0)
    {
        quant++;
    }
    return quant;
}
int casa3(int resto_pe, int resto_t, int resto_g, int resto_y, int resto_pa, int resto_v, int resto_e)
{
    int casa1_pe, casa1_t, casa1_g, casa1_y, casa1_pa, casa1_v, casa1_e, quant;
    quant = 0;
    casa1_pe = resto_pe - 1000;
    casa1_t = resto_t - 1600;
    casa1_g = resto_g - 2000;
    casa1_y = resto_y - 1200;
    casa1_pa = resto_pa - 1200;
    casa1_v = resto_v - 800;
    casa1_e = resto_e - 1000;

    if (casa1_pe >= 0)
    {
        quant++;
    }
    if (casa1_t >= 0)
    {
        quant++;
    }
    if (casa1_g >= 0)
    {
        quant++;
    }
    if (casa1_y >= 0)
    {
        quant++;
    }
    if (casa1_pa >= 0)
    {
        quant++;
    }
    if (casa1_v >= 0)
    {
        quant++;
    }
    if (casa1_e >= 0)
    {
        quant++;
    }
    return quant;
}

int main()
{
    int pedro, tulio, gabriel, yanka, paloma, vinicius, elias;
    int resto_pe, resto_t, resto_g, resto_y, resto_pa, resto_v, resto_e;
    int casa1_quant, casa2_quant, casa3_quant;
    int casa1_val, casa2_val, casa3_val;

    scanf("%d %d %d %d %d %d %d", &pedro, &tulio, &gabriel, &yanka, &paloma, &vinicius, &elias);

    resto_pe = pedro - 7400;
    resto_t = tulio - 4400;
    resto_g = gabriel - 5200;
    resto_y = yanka - 4000;
    resto_pa = paloma - 4400;
    resto_v = vinicius - 4800;
    resto_e = elias - 6600;

    casa1_quant = casa1(resto_pe, resto_t, resto_g, resto_y, resto_pa, resto_v, resto_e);
    casa2_quant = casa2(resto_pe, resto_t, resto_g, resto_y, resto_pa, resto_v, resto_e);
    casa3_quant = casa3(resto_pe, resto_t, resto_g, resto_y, resto_pa, resto_v, resto_e);

    casa1_val = casa1_quant * 10;
    casa2_val = casa2_quant * 20;
    casa3_val = casa3_quant * 30;

    if ((casa1_val > casa2_val) && (casa1_val > casa3_val))
    {
        printf("CASA 1\n%d\n%d\n", casa1_val, casa1_quant);
    }
    else if ((casa2_val > casa1_val) && (casa2_val > casa3_val))
    {
        printf("CASA 2\n%d\n%d\n", casa2_val, casa2_quant);
    }
    else if ((casa3_val > casa2_val) && (casa3_val > casa1_val))
    {
        printf("CASA 3\n%d\n%d\n", casa3_val, casa3_quant);
    }
    else if ((casa1_val == casa2_val) || (casa1_val == casa3_val) || (casa2_val == casa3_val))
    {
        if ((casa1_quant > casa2_quant) && (casa1_quant > casa3_quant))
        {
            printf("CASA 1\n%d\n%d\n", casa1_val, casa1_quant);
        }
        else if ((casa2_quant > casa1_quant) && (casa2_quant > casa3_quant))
        {
            printf("CASA 2\n%d\n%d\n", casa2_val, casa2_quant);
        }
        else if ((casa3_quant > casa1_quant) && (casa3_quant > casa2_quant))
        {
            printf("CASA 3\n%d\n%d\n", casa3_val, casa3_quant);
        }
        else
        {
            printf("NAO TERA SHOW!\n");
        }
    }
    return 0;
}