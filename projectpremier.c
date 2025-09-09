#include <stdio.h>
void saisirnotes();
void affichernotes();
void moyenne();
void maxnote();
void minnote();
void admis();
void ajouternote();
void modifiernote();
void statistique();
void supprimernote();
int main (){
  int tonchoix=0 ;
  label :
  printf ("__MENU_ \n");
  printf("1)Saisir N notes: \n");
  printf("2): Afficher les notes :\n");
  printf("3):  Statistiques (moyenne, max, min, admis/non admis): \n");
  
printf("4) Ajouter une note: \n");
printf("5) Modifier une note (par index): \n");
printf("6) Supprimer une note (par index):\n");
printf("0) Quitter\n");
  printf("choisir votre choix :\n ");
  scanf("%d", &tonchoix);

  switch (tonchoix) {
            case 1: saisirnotes(); goto label ;break;
            case 2: affichernotes();  goto label ; break;
            case 3: statistique();  goto label ;break;
            case 4: ajouternote();  goto label ; break;
            case 5: modifiernote();  goto label ; break;
            case 6: supprimernote();  goto label ; break;

            case 0: break;
            default: printf("choix invalide \n"); break;
        }
}
int note[100];
int n ;
void saisirnotes(){

  printf(" combien des notes a saisir :");
  scanf("%d",&n);
  for ( int i=0 ; i<n; i++){
    printf("saisir votre note :");
    scanf("%d",&note[i]);
  }
}
void affichernotes(){
  int i = 0;
  printf("vos notes par indices est:\n");
  for( i  ; i<n;i++){
    printf("[%d] %d\n",i,note[i]);
  }
}
void statistique(){
  int choix ;
  printf("choisir : \n pour afficher la moyenne des  notes appuyer 1:\n pour afficher le max  des notes appuyer 2:\n pour afficher le min des notes appuyez sur : 3\n  pour afficher les nombre des admis / non admis appuyer 4: \n");
  scanf("%d",&choix);
  switch(choix){
            case 1: moyenne(); break;
            case 2: maxnote(); break;
            case 3: minnote();break;
            case 4: admis();break;
            default: break;
        }
  
  
}
void moyenne(){
  int somme =0;
  for(int i = 0 ; i<n;i++){
     somme+=note[i];
  }
  float moy = somme/n;
  printf("la moyenne des notes est :%.2f \n",moy);

}
void maxnote(){
  int max=note[0];
  for ( int i=0;i<n;i++){
    if(max<note[i]){
      max=note[i];
    }
   
  }
  printf("la note max est :%d",max);
}
void minnote(){
  int min=note[0];
  for ( int i=0;i<n;i++){
    if(min>note[i]){
      min=note[i];
    }
   printf("la note max est :%d \n",min);
  }
}
void admis(){
  int count=0;
  for (int i =0;i<n ;i++){
    if(note[i]>=10){
      count++;
    }

  }
  printf("les nombres des admis est:%d \n",count);
}
void ajouternote(){
        
        float ajouterunnote;
        scanf("%f",&ajouterunnote);
        if(ajouterunnote<0 || ajouterunnote>=20){
            printf("essayer  une autre note");
        }else{
            note[n]=ajouterunnote;
            n++;
        }


}
void modifiernote() {
    int i,nouvellenote;
    

    printf("Entrer lindex de la note a modifier (0 - %d): ", n - 1);
    scanf("%d", &i);

    if (i < 0 || i >= n) {
        printf("Index invalide \n");
        return;
    }

    printf("Entrer la nouvelle note : ");
    scanf("%d", &nouvellenote);

    if (nouvellenote < 0 || nouvellenote > 20) {
        printf("Note invalide  note entre 0 et 20\n");
        return;
    }

    note[i] = nouvellenote;
    printf("La note de lindex %d abien modifiee \n", i);
}

void supprimernote(){
    int index ;
    printf("Saisir l index de note que vous voulez (0 - %d):" , n - 1);
    scanf("%d \n",&index);
    if (index <0 || index >= n-1)
    {
        printf("L index est invalid ");
        
    }

    for ( int i = index; i <= n; i++)
    {
        note[i]=note[i+1];
        
    }
    n--;
    printf("bien supprimer");
    
    
    
}