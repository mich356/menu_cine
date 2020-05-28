#include <stdio.h>
#include <conio.h>

int main()
{
    int p=0;
    int op;
    int num1,num2;

    while(op!=4)
    {
    	printf("CINE\n");
        printf("1.- Boletos\n");
        printf("2.- Dulceria\n");
        printf("3.- Sala\n");
        printf("4.- Comida\n");
        printf("5.- Bebidas\n");
        printf("6.- Juegos\n");
        printf("7.- Limpieza\n");
        printf("8.- Banos\n");
        printf("Indica la opcion: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1: printf("individual\n,infantil\n,cupon\n,familiar\n");break;
            case 2: printf("caramelos\n,botanas\n,gomitas\n,chocolates\n");break;
            case 3: printf("normal\n,vip\n");break;
            case 4: printf("comida rapida\n,comida completa\n");break;
            case 5: printf("refresco\n,cafe\n");break;
            case 6: printf("alquilar\n,si\n,no\n");break;
            case 7: printf("banos\n,pasillo\n");break;
            case 8: printf("femenino\n,masculino");break;
            
        }
    }
}
