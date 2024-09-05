#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin. Formule :

float C,K;
printf("donner la temperature en celsius :");
scanf("%f",&C);
K = C + 273.15;
printf("la tmperature en kelvin :%f",K);
    return 0;
}
