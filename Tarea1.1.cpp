/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 03/02/2022 
	Escuela: Universidad del Valle de Mexico Campus Villahermosa
	Materia: Programación Estructurada
	Ciclo: 01/2022

	Este es un programa en Lenguaje C de la materia de Programación Estructurada
	Muestra el uso de:

    	-Variables flotantes
    	-printf para mostrar mensajes y variables
    	-scanf
    	-El uso de include para las librerías
    	-uso de la librería math.h
    	-Comentarios para la documentación interna del programa
*/
#include<stdio.h>
#include<math.h>
int main(){
	//Declaración de variables
	float R, r,a;
	//Entrada de datos
	printf("Introduce el radio menor de la corona: ");
	scanf("%f", &r);
	printf("Introduce el radio mayor de la corona: ");
	scanf("%f", &R);
	//Proceso
	a=M_PI*pow(r,2)-(R,2);
	//Salida
	printf("El area de la corona es %f", a);
	return 0;
}
