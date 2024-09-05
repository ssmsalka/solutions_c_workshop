#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Écrivez un programme qui demande la distance en kilomètres et la transforme en yards. Formule :

float Km,yards;
printf("donner la distance en kilometre: ");
scanf("%f",&Km);
yards = Km * 1093.61;
printf("la transforme en yards est :%f",yards);
    return 0;
}
