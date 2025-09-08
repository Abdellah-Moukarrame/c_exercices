#include <stdio.h>

int simo(int x){
    int cnt=0;
    while (x!=0)
    {
        cnt++;
        x=x/10;
    }
    return cnt;
    
}

int main(void)
{
    int GS1;
    int Identifiant;
    int Code;
    int NA;
    int CC;
    int s ;


    while (1)
    {
        printf("Entrer L ISBN :");
        scanf("%d-%d-%d-%d-%d", &GS1, &Identifiant, &Code, &NA, &CC);
        s=simo(GS1)+simo(Identifiant)+simo(Code)+simo(NA)+simo(CC);
        
        
        if ((GS1 == 978 || GS1 == 979) && s<=13)
            break;
        printf("tghlt\n");
    }
    printf("Préfixe GS1 :%d\n", GS1);
    printf("Identifiant de groupe :%d\n", Identifiant);
    printf("Code de l'éditeur :%d\n", Code);
    printf("Numéro d'article :%d\n", NA);
    printf("Chiffre de contrôle :%d\n", CC);
    return 0;
}