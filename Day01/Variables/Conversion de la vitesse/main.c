#include <stdio.h>
#include <stdlib.h>

int main()
{
//�crivez un programme qui demande la vitesse en kilom�tres par heure (km/h) et la transforme en m�tres par seconde (m/s).
float temperature;
printf("donner la temperature en Celius :");
scanf ("%f",&temperature);
if (temperature<0){
    printf("l etat de l eau est solide\n");
} else if (temperature<100){
    printf("l etqt de l eau est liquide");
}else {
    printf("l etat de l eau est gaseuse ");

}

    return 0;
}
