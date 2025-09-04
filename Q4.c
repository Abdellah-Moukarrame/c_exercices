#include <stdio.h>
int main()
{
    int n;
    printf("Entrez une note numérique:\n");
    scanf("%d", &n);
    int X = n / 10;

    if (X >= 9 &&X <= 10)
    {
        X = 1;
    }
    else if (X >= 8 && X < 9)
    {
        X = 2;
    }
    else if (X >= 7 && X < 8)
    {
        X = 3;
    }
    else if (X >= 6 && X < 7)
    {
        X = 4;
    }
    else if (X >= 0 && X < 6)
    {
        X = 5;
    }

    switch (X)
    {
    case 1:
        printf("Note littérale : A");
        break;
    case 2:
        printf("Note littérale : B");
        break;
    case 3:
        printf("Note littérale : C");
        break;
    case 4:
        printf("Note littérale : D");
        break;
    case 5:
        printf("Note littérale : E");
        break;
    }
}