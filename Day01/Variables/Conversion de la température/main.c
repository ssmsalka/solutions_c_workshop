#include <stdio.h>
#include <stdlib.h>

int main()
{
    //�crivez un programme qui demande la temp�rature en Celsius et la transforme en Kelvin. Formule :

float C,K;
printf("donner la temperature en celsius :");
scanf("%f",&C);
K = C + 273.15;
printf("la tmperature en kelvin :%f",K);
    return 0;
}
