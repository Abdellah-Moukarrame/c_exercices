#include <stdio.h>

int main(void)
{
    int n;

    printf("Entrer un nombre :");
    scanf("%d", &n);

    if ((n >= 10 && n <= 99))
    {
        int x = n % 10;
        int y = n / 10;
        printf("le nombre reverse est:%d%d", x, y);
        return 0;
    }
    else
    {
        printf("svp entrer nombre avec 2 chiffres ");
    }
}