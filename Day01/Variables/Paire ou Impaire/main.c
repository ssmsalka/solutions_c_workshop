#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair.
    int nombre;
        printf("entrer le nombre :");
        scanf("%d",&nombre);
        if (nombre %2==0){
            printf("le nombre est pair ");
        }else {
        printf("le nombre est impair");
        }
    return 0;
}
