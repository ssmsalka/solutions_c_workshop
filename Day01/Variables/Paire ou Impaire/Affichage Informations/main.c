#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nom[10];
  char prenom[10];
  char sexe;
  char adresse_email[20];
   int age;
   printf("donner votre nom :");
   scanf("%s",&nom);
   printf("donner votre prenom :");
   scanf("%s",&prenom);
   printf("donner votre sexe(f/M):");
   scanf(" %c",&sexe);
   printf("donner votre age :");
   scanf("%d",&age);
   printf("donner votre adresse email:");
   scanf("%s",&adresse_email);

    return 0;
}
