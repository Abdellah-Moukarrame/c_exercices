#include <stdio.h>

void Ajouteretudiant();
void Saisirnotes();
void Afficheretudiants();
void Afficherbultin();
void moyennegenerale();
void Calculmoyennegenerle();

typedef struct Etudiants
{
    char cne[20];
    char nom[40];
    char prenom[40];
    float notes[4];
    float moyenne;
}Etudiants;
int nbEtudiants = 0;
Etudiants classe[30];

int main()
{

    int choix;

label:
    printf("1 Ajouter un etudiant : \n");
    printf("2 Saisir les notes d un etudiant: \n");
    printf("3 Afficher touts ls etudiants: \n");
    printf("4 Afficher bulletin d un etudiant: \n");
    printf("5 Calculer la moyenne total de chaque etudiant : \n");
    printf("6 Calculer la moyenne general : \n");
    printf("0 Quitter : \n");
    printf(" Entrer votre choix : ");
    scanf("%d", &choix);

    switch (choix)
    {
    case 1:
        Ajouteretudiant();
        goto label;
    case 2:
        
        Saisirnotes();
        goto label;
    case 3:
        
        Afficheretudiants();
        goto label;
    case 4:
        
        Afficherbultin();
        goto label;
    case 5:
        
        moyennegenerale();
        goto label;
    case 6:
        
        Calculmoyennegenerle();
        goto label;
    case 0:
        
        break;
    }
}
int nombre;
void Ajouteretudiant()
{

    printf("combien des etudiants volez vous ajouter :");
    scanf("%d", &nombre);
    for (int i = nbEtudiants; i < nbEtudiants + nombre; i++)
    {
        float moy = 0;
        getchar();
        printf("cne : ");
        scanf("%[^\n]", classe[i].cne);
        getchar();
        printf("nom : ");
        scanf("%[^\n]", classe[i].nom);
        getchar();
        printf("prenom : ");
        scanf("%[^\n]", classe[i].prenom);
        getchar();

        printf("\n");
    }
}

void Saisirnotes()
{
    int indix;
    printf("saisir l index de l etudiant :\n");
    scanf("%d", &indix);

    for (int i = 0; i < 4; i++)
    {
        
        printf("note %d : ", i + 1);
        scanf("%f", &classe[indix].notes[i]);
    }
    printf("\n \n");
    
}
void Afficheretudiants()
{
    printf("Les etudiant par indice sont :\n");
    for (int i = 0; i < nombre; i++)
    {
        printf("L etudiant de index : \n");
        printf("[%d] cne: %s \n", i, classe[i].cne);
        printf("[%d] nom: %s \n", i, classe[i].nom);
        printf("[%d] prenom: %s \n", i, classe[i].prenom);
        printf("\n \n");
        
    }
}
void Afficherbultin()
{

    int indice;
    printf("saisir l etudaint par index pour afficher son bultin : \n");
    scanf("%d",&indice);
    for (int i = 0; i < 4; i++)
    {
        printf("les notes sont : %.2f \t",  classe[indice].notes[i]);
    }
    printf("\n \n");
}
void Calculmoyennegenerle()
{
    
    int somme = 0;
    for (int i = 0; i < nombre; i++)
    {
        somme += classe[i].moyenne;
    }
    float M = somme/nombre ;
    printf("la moyennegenerale est %.2f : \n", M);
    printf("\n \n");
}
void moyennegenerale(){
    int index ;
    printf("saisir l indice de letudiant pour calculer la moyenne : \n");
    scanf("%d",&index);
    int s =0;
    for (int i =0 ; i < 4;i++){
        s+=classe[index].notes[i];
        
    }
    classe[index].moyenne=s/4 ;
    printf("la moyenne generale de l eleve d index  [%d] :%.2f \n" ,index, classe[index].moyenne);
    printf("\n \n");
}
 
