#include <stdio.h>

int fat(int n)
{
    if (n)
        return n * fat(n - 1);
    else
        return 1;
}
int main()
{
    int num;
    printf("\n\nDigite o numero que sera fatorado(!n): ");
    scanf("%d", &num);
    printf("%d", fat(num));
    return 0;
}
