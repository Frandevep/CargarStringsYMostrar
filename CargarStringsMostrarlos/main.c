#include <stdio.h>
#include <stdlib.h>

struct datos{

    char nombres[10];
};

int main()
{
    char nombres[10];
    int i=0;
    struct datos d[3]; //arreglo de estructuras para almacenar 3 nombres


    for(i=0;i<3;i++){
        printf("Cargue nombres:");
        scanf("%s",d[i].nombres); //guarda cada nombre en una posicion distinta del array
    }

    for(int i=0;i<1;i++)
    {
        printf("%s",d[0].nombres);
        printf("%s",d[1].nombres);
        printf("%s",d[2].nombres);
    }

    return 0;
}
