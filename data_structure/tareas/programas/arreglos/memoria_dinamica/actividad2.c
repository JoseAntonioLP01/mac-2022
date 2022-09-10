#include <stdio.h> 
#include <stdlib.h>

struct alumnos
{
	char *nombre[25];
	//char *nombre == (int *)malloc(25 * sizeof(int));
	int *edad;
	int *calificacion;
} datos[1000];

void promedioEdad();
void promedioCalif();
void nombresOrden();

int promedioEd, promedioCa, contador, n;


int main()
{
	printf("Ingresa la cantidad de alumnos a registrar: ");
	scanf("%d", &n);
	for (contador=0; contador<n; contador++)
	{
		printf("\nIngresa el nombre del alumno %d: ", contador+1);
		fflush(stdin);
		scanf("%s", &datos[contador].nombre);
		printf("\nNombre capturado: %s", datos[contador].nombre);
		printf("\nIngresa la edad de %s: ", datos[contador].nombre);
		fflush(stdin);
		scanf("%d", &datos[contador].edad);
		printf("\nEdad capturada: %d", datos[contador].edad);
		printf("\nIngresa la calificacion de %s: ", datos[contador].nombre);
		fflush(stdin);
		scanf("%d", &datos[contador].calificacion);
		printf("\nCalificacion ingresada: %d", datos[contador].calificacion);
	}
    printf("\n");
	promedioEdad();
    printf("\n");
	promedioCalif();
    printf("\n");
    nombresOrden();
	return 0;
}

void promedioEdad()
{
	int sumaEd=0;
	for (contador=0; contador<n; contador++)
	{
		printf("SumaEd antes: %d\ndatosContador antes: %d\n", sumaEd, datos[contador].edad);
		fflush(stdin);
		printf("Contador 1: %d\n", contador);
		fflush(stdin);
		sumaEd = datos[contador].edad + sumaEd;
		fflush(stdin);
		printf("Contador 2: %d\n", contador);
		fflush(stdin);
		printf("Suma de edades: %d\n", sumaEd);
		fflush(stdin);
	}
	promedioEd = sumaEd/n;
	printf("\nPromedio de edad: %d", promedioEd);
}

void promedioCalif()
{
	int sumaCa=0;
	for (contador=0; contador<n; contador++)
	{
		sumaCa=sumaCa+datos[contador].calificacion;
	}
	promedioCa=sumaCa/n;
	printf("\nPromedio de calificacion: %d", promedioCa);
}

void nombresOrden()
{
    printf("\nAlumnos en sentido inverso al que fueron ingresados");
    for (contador=n; contador>=0; contador--)
    {
        printf("%s\n", datos[contador].nombre);
    }
}