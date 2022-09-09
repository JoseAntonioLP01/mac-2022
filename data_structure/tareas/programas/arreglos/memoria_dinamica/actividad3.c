#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int *digitoCuenta = (int*)malloc(9 * sizeof(int));
	int i, j;
	printf("Ingresa tu numero de cuenta, despues de cada numero da enter:\n");
	for(i=0; i<9; i++)
	{
		//j = getchar();
		scanf("%d", &digitoCuenta[i]);
		//digitoCuenta[i]=j;
	}
	
	printf("\n\nResultado:\n\n");
	
	for(i=0; i<9; i++)
	{
		for (j=0; j<digitoCuenta[i]; j++)
		{
			printf("| %d ", digitoCuenta[i]);
		}
		printf("|\n");
	}
	return 0;
}