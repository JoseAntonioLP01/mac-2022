#include <stdio.h> 
#include <stdlib.h>

struct alumnos
{
	char nombre[25];
	int edad;
	int calificacion;
} datos[1000];

int promedioEdad();
int promedioCalif();
int nombresOrden();

int promedioEd, promedioCa, contador, n;


int main()
{
	printf("Ingresa la cantidad de alumnos a registrar: ");
	scanf("%d", &n);
	for (contador=0; contador<n; contador++)
	{
		printf("\nIngresa el nombre del alumno %d: ", contador+1);
		scanf("%s", &datos[contador].nombre);
		//printf("\nNombre capturado: %s", datos[contador].nombre);
		printf("\nIngresa la edad de %s: ", datos[contador].nombre);
		scanf("%d", &datos[contador].edad);
		//printf("\nEdad capturada: %d", datos[contador].edad);
		printf("\nIngresa la calificacion de %s: ", datos[contador].nombre);
		scanf("%d", &datos[contador].calificacion);
		//printf("\nCalificacion ingresada: %d", datos[contador].calificacion);
	}
    printf("\n");
	promedioEdad();
    printf("\n");
	promedioCalif();
    printf("\n");
    nombresOrden();
	return 0;
}

promedioEdad()
{
	int sumaEd=0;
	for (contador=0; contador<n; contador++)
	{
		sumaEd=sumaEd+datos[contador].edad;
	}
	promedioEd = sumaEd/n;
	printf("\nPromedio de edad: %d", promedioEd);
}

promedioCalif()
{
	int sumaCa=0;
	for (contador=0; contador<n; contador++)
	{
		sumaCa=sumaCa+datos[contador].calificacion;
	}
	promedioCa=sumaCa/n;
	printf("\nPromedio de calificacion: %d", promedioCa);
}

nombresOrden()
{
    printf("\nAlumnos en sentido inverso al que fueron ingresados");
    for (contador=n; contador>=0; contador--)
    {
        printf("%s\n", datos[contador].nombre);
    }
}