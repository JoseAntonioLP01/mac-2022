#include <stdio.h> 
#include <stdlib.h>

int digitoCuenta[9];

int main()
{
	int i, j;
	printf("Ingresa tu numero de cuenta:\n");
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