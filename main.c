#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int x,y;
    int total;


    while(seguir=='s')
    {
        printf("Ingresar 1er operando (A=x)\n");
        scanf("%d",&x);

        printf("Ingresar 2do operando (B=y)\n");
        scanf("%d",&y);

        printf("Que operacion desea efectuar:\n");
        printf("1- Calcular la suma (%d+%d)\n",x,y);
        printf("2- Calcular la resta (%d-%d)\n",x,y);
        printf("3- Calcular la division (%d/%d)\n",x,y);
        printf("4- Calcular la multiplicacion (%d*%d)\n",x,y);
        printf("5- Calcular el factorial de(%d)\n",x);
        printf("6- Calcular todas las operacione\n");
        printf("7- Salir\n");

        fflush(stdin);

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

                total=suma(x,y);
                printf("la suma da:%d\n",total);
                break;
            case 2:

                total=resta(x,y);
                printf("la resta da:%d\n",total);
                break;
            case 3:
                if (y==0)
                    {
                        printf("error no se puede dividir por 0\n");
                        break;


                     }

                int result=0;


                result=division(x,y);
                printf("la division da:%d\n",result);
                break;

            case 4:

                total=multiplicacion(x,y);
                printf("la multiplicacion da:%d\n",total);
                break;
            case 5:

                total=factorial(x);
                printf("el factorial da:%d\n",total);
                break;
            case 6:

                total=suma(x,y);
                printf("la suma da:%d\n",total);

                total=resta(x,y);
                printf("la resta da:%d\n",total);

                 result=division(x,y);
                printf("la division da:%.3f\n",total);

                total=multiplicacion(x,y);
                printf("la multiplicacion da:%d\n",total);
                break;
            case 7:
                seguir = 'n';
                break;
        }

    }


    return 0;
}
