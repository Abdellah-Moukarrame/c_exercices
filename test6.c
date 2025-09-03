#include <stdio.h>
int main(void)
{
    
    printf("please enter the value of x :");
    int x;
    scanf("%d", &x);
    int valeur=((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("%d", valeur);
}