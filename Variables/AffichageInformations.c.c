#include <stdio.h>
int main(){
    int age;
    char prenom[100],nom[100],adresse[100],sexe[100];
       printf("Entrer votre nom :\n");
    scanf("%s",&nom);
     printf("Entrer votre prenom :\n");
    scanf("%s",&prenom);
    printf("Veillez Entrer age :");
    scanf("%d",&age);
    printf("Entrer votre nom sexe : \n");
    scanf("%s",&sexe); 
    printf(" Entrer votre addressEmail  : \n");
    scanf("%s",&adresse);

   
  printf(" Votre informations Personelle sont les suivants : \n nom= %s ,\n prenom=%s; age = %d; sexe=%s , adresse email=%s ",nom,prenom,age,sexe,adresse);
} 