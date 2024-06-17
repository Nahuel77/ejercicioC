#include <stdio.h>
#include <stdlib.h>

/*
Sea B un arreglo de elementos enteros. Desarrollar un programa en C que permita
mediante el uso de un menú, seleccionar una de las siguientes opciones:
• Asignar el valor (9) a todos los elementos de subíndice impar e imprimir el
arreglo modificado
• Calcular la suma de todos los elementos del arreglo e imprimirla
• Construir un arreglo C tal que sea B permutado (C[0]=A[N], C[1]=A[N-1],... )
• Imprimir los elementos pares del vector B.
*/

int main()
{

    int N, op, sum, i; //La variable "N" almacena el numero del tamaño del vector. "op" guarda la opcion elegida del menu.
    //"sum" guarda la sumatoria de los elementos del vector.

    printf("Ingrese la dimension del vector:\n");
    scanf("%d", &N); //Solicito tamaño del vector.
    int vec[N], v2[N]; //declaro el vector "vec" original y "v2" para invertir los valores.

    system("cls");

    for(i=0; i<N; i++)  // for para ingresar valores al vector.
    {
        printf("ingrese el valor %d del vector:\t", i+1);
        scanf("%d", &vec[i]);
    }

    do  // do while para la secuencia de menu
    {
        system("cls");
        printf("Menu\n\t1. Calcular Suma.\n\t2. Construir arreglo inverso.\n\t3. Imprimir pares-\n\t4. Salir.\n"); //opciones del menu
        scanf("%d", &op);

        switch(op)
        {
        case 1:
            sum=0;
            for(i=0; i<N; i++)
            {
                sum += vec[i];
            }
            printf("%d\n", sum);
            system("pause");
            break;
        case 2:
            for(i=0; i<N; i++)
            {
                v2[i]=vec[N-i-1];
            }
            for(i=0; i<N; i++)
            {
                printf("\t%d", v2[i]);
            }
            printf("\n");
            system("pause");
            break;
        case 3:
            for(i=0; i<N; i++){//For para recorrer el vector
                if((vec[i]%2)!=1){//If para ver si el numero es par (todo numero impar dividido por 0 tiene resto 1) por lo tanto cuando el resto no sea 1...
                    printf("\t%d", vec[i]);
                }
            }
            printf("\n");
            system("pause");
            break;
        case 4:
            printf("\t\t\t\tAdios!\n\n");
            break;
        default:
            printf("La opcion ingresada no es valida.\n");
            system("pause");
        }
    }
    while(op!=4);

    return 0;
}
