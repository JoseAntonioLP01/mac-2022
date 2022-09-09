#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, j, numeroGuia = 0;

void generarPares(int *, int *);
void modificacion(int *, int *);
void impresion(int *, int *);

int main()
{
    int *noCuenta = (int*)malloc(9 * sizeof(int));
    int *noPares = (int*)malloc(10 * sizeof(int));
    printf("Ingresa tu numero de cuenta, despues de cada numero da enter:\n");
	for(i=0; i<9; i++)
	{
	    scanf("%d", &noCuenta[i]);
	}
    generarPares(noCuenta, noPares);
    modificacion(noCuenta, noPares);
    impresion(noCuenta, noPares);
    return 0;
}

void generarPares(int *noCuenta,  int *noPares)
{
    printf("Inicio de funcion generarPares\n");
    for(i=0; i<10; i++)
    {
        numeroGuia = numeroGuia + 2;
        noPares[i] = numeroGuia;
        printf("%d ", noPares[i]);
    }
    printf("\nFin de funcion\n");
}

void modificacion(int *noCuenta, int *noPares)
{
    printf("Inicio de funcion modificacion\n");
    printf("%d\n", noCuenta[8]);
    j = noCuenta[8];
    noPares[j] = -1;
    printf("%d\n", j);
    printf("Fin de funcion\n");
}

void impresion(int *noCuenta, int *noPares)
{
    printf("Inicio de funcion impresion\n");
    for(i=0; i<10; i++)
    {
        printf("| %d ", noPares[i]);
    }
    printf("| \n");
    printf("Fin de funcion\n");
}