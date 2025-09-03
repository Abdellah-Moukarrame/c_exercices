#include <stdio.h>
int main(void)
{
    float montant;
    printf("Dkhel L montant Li bghiti bach nhsbolk tax : ");
    scanf("%f", &montant);
    float tax = (montant *  0.05) + montant;
    printf("%.2f $",tax);
}