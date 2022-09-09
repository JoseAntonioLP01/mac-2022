#include <stdio.h>
#include <stdlib.h>

int noCuenta[9];
int noPares[10];

int i, j, numeroGuia = 0;

int generarPares();
int modificacion();
int impresion();

int main()
{
    printf("Ingresa tu numero de cuenta, despues de cada numero da enter:\n");
	for(i=0; i<9; i++)
	{
	    scanf("%d", &noCuenta[i]);
	}
    generarPares();
    modificacion();
    impresion();
    return 0;
}

generarPares()
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

modificacion()
{
    printf("Inicio de funcion modificacion\n");
    printf("%d\n", noCuenta[8]);
    j = noCuenta[8];
    noPares[j] = -1;
    printf("%d\n", j);
    printf("Fin de funcion\n");
}

impresion()
{
    printf("Inicio de funcion impresion\n");
    for(i=0; i<10; i++)
    {
        printf("| %d ", noPares[i]);
    }
    printf("| \n");
    printf("Fin de funcion\n");
}