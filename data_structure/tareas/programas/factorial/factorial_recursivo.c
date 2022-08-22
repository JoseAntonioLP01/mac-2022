#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, contador, factorial;
	
	factorial=1;
    printf("Ingresa el numero que deseas obtener el factorial: ");
    scanf("%d", &numero);

    for (contador=1; contador<=numero; contador++)
    {
		factorial=factorial*contador;
    }

	printf("El factorial del numero escrito es: %d\n", factorial);
	
    return 0;
}
