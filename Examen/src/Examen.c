/*
 ============================================================================
 Name        : Examen.c
 Author      : cesar davila
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 * 1. Crear una función llamada aplicarAumento
 * que reciba como parámetro el precio de un producto
 * y devuelva el valor del producto con un aumento del 5%. Realizar la llamada desde el main.
*
Pude Hacerlo
 */

/*
 * 2. Crear una función que se llame reemplazarCaracteres
 * que reciba una cadena de caracteres como primer parámetro,
 * un carácter como segundo y otro carácter  como tercero,
 * la misma deberá reemplazar cada ocurrencia del segundo parámetro por el tercero
 * y devolver la cantidad de pacientees que se reemplazo ese carácter  en la cadena
 *
 */

/*
 * 3. Dada la siguiente estructura generar una función que permita ordenar un array
 * de dicha estructura por tipo.
 * Ante igualdad de tipo deberá ordenarse por efectividad creciente.
 * Hardcodear datos y mostrarlos desde el main.
 */
#include <stdio.h>
#include <stdlib.h>

#define TAM 5
int aplicarAumento(int precio);
//int reemplazarCaracteres(char[], char a, char b, char c);

	typedef struct{
		int id;
		char  nombre [20];
		char tipo[20];
		float efectividad;
		int isEmpty;
	}eVacuna;

int ordenamiento(eVacuna paciente[],int tam);
int main()
{
	int precio=163;
	float precioFinal;

	eVacuna pacientes[TAM] = {
			{ 5000, "Pedro" ,"Pfizer", 0.55},
			{ 5001, "Abel" , "Aztrazeneca", 0.66},
			{ 5002, "Oscar", "Pfizer" , 0.90},
			{ 5003, "Ruben", "Spuknic", 0.87},
			{ 5003, "Leon","Jhonson", 0.45 }
	};


	precioFinal=aplicarAumento(precio);

	printf("El precio con aumento es : %.2f", precioFinal);

	ordenamiento(pacientes, TAM);

	return EXIT_SUCCESS;
}

int aplicarAumento(int precio){
	float aumento= 1.05;
	float precioFinal;
	if (precio<0){
		printf("Precio Erroneo");
	}else{
		precioFinal=(float)precio * aumento;

	}
	return precioFinal;
}
/*
int reemplazarCaracteres(char[], char a, char b, char c){


}
*/

int ordenamiento(eVacuna paciente[],int tam){

int todoOK=0;
eVacuna vacunados;
if(paciente != NULL && tam > 0)
   {
for(int i=0; i < tam-1; i++)
{
	for(int j = i+1; j <tam; j++)
	{
		 if( ((paciente[i].tipo == paciente[j].tipo) &&  (paciente[i].id > paciente[j].id))
		     || ((paciente[i].tipo != paciente[j].tipo) &&(paciente[i].tipo > paciente[j].tipo) ))
		                {
		                    vacunados = paciente[i];
		                    paciente[i] = paciente[j];
		                    paciente[j] = vacunados;
	}

   }

}
todoOK= 1;
}
int flag = 0;
   if(paciente != NULL && tam > 0)
   {
       system("cls");
       printf("          *** Listado de pacientes ***\n\n");
       printf(" id          Nombre      tipo    efectividad\n");
       printf("------------------------------------------------\n");
       for(int i=0; i < tam; i++)
       {
           if( !paciente[i].isEmpty )
           {
        	   printf("  %4d       %15s       %10s      %9.2f\n",
        	                 paciente.id,
							 paciente.nombre,
							 paciente.tipo,
							 paciente.efectividad,

        	                );
               flag++;
           }
       }
   }
return todoOK;
}
