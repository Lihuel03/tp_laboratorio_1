/*
 * biblioteca.c
 *
 *  Created on: 25 sep. 2021
 *      Author: Lihuel
 *
 *  1. Ingresar 1er operando (A=x)
    2. Ingresar 2do operando (B=y)
    3. Calcular todas las operaciones
    a) Calcular la suma (A+B)
    b) Calcular la resta (A-B)
    c) Calcular la division (A/B)
    d) Calcular la multiplicacion (AB)
    e) Calcular el factorial (A!)
    4. Informar resultados
        a) “El resultado de A+B es: r”
        b) “El resultado de A-B es: r”
        c) “El resultado de A/B es: r” o “No es posible dividir por cero”
        d) “El resultado de AB es: r”
        e) “El factorial de A es: r1 y El factorial de B es: r2”
    5. Salir
 */
#include "biblioteca.h"
#include <stdio.h>
#include <stdlib.h>

 int ingresarmenu()
 {
	 int opcionelegida;
	 printf("1. Ingresar 1er operando (A=x)\n 2. Ingresar 2do operando (B=y)\n 3. Calcular todas las operaciones\n  4. Informar resultados\n 5. salir\n ingrese una opcion (1/5)");
	 scanf("%d", &opcionelegida);
	 while (opcionelegida < 1 || opcionelegida > 5){
		 printf("ERROR!! INGRESE\n 1. Ingresar 1er operando (A=x)\n 2. Ingresar 2do operando (B=y)\n 3. Calcular todas las operaciones\n  4. Informar resultados\n 5. salir\n ingrese una opcion (1/5)");
		 scanf("%d", &opcionelegida);
	 }
	 return opcionelegida;

 }
 float pedirflotante(){
	 float numeroflotante;
   printf("ingrese un flotante");
   scanf("%f", &numeroflotante);

   return numeroflotante;
 }

 float sumarnumero(float numero1, float numero2){
	 float suma;
	 suma = numero1 + numero2;

	 return suma;
 }
 float restarnumero(float numero1, float numero2){
 	 float resta;
 	 resta = numero1 - numero2;

 	 return resta;
 }
 float dividirnumero(float numero1, float numero2, float *resultado){
 	 float dividir;

 	if (numero2 == 0 ){
 		dividir = 0;
 	}  else {
 		dividir = 1;
 		*resultado = numero1 / numero2;
 	}
 	 return dividir;
 	}

 float multiplicarnumero(float numero1, float numero2){
	 float multiplicacion;
	 multiplicacion = numero1 * numero2;

	 return multiplicacion;
 }
 int calcularfactorial(float numero){
	 int calcularfactorial;
	 calcularfactorial = 1;
	 if (numero-(int)numero != 0 || numero < 0){
		 calcularfactorial = -1;

	 }
	 else {
		 if (numero > 0){
			 for (int i = numero; i > 0; i--){
				 calcularfactorial *= i;

			 }
		 }
		 else {
			 if (numero == 0){
				 calcularfactorial = 1;
			 }
		 }
	 }
	 return calcularfactorial;
 }

 /* resultado */
 void resultadosuma(float numero1,float numero2,float resultado){
	 printf("El resultado de la suma %f + %f = %f\n", numero1, numero2, resultado);
 }
 void resultadoresta(float numero1,float numero2,float resultado){
	 printf("El resultado de la resta %f - %f = %f\n", numero1, numero2, resultado);
}
 void resultadodivision(float numero1,float numero2,float resultado){
	 int flagdivision;
	 flagdivision = dividirnumero(numero1, numero2, &resultado);
	 if (flagdivision == 0)
	 {
		 printf("Error!! no se puede calcular\n");

	 }
	 else{
		 printf("El resultado de la division %f \n", resultado);
	 }

 }
void resultadomultiplicacion(float numero1, float numero2, float resultado){
	printf("El resultado de la multiplicacion es %f * %f = %f\n", numero1, numero2, resultado);
}
void resultadofactorial(float numero, float resultado){
	if(resultado == -1){
	printf("error! no se pudo");
	}
	else {

	printf("El resultado del factorial de %f es %f\n ", numero, resultado);
	}
}



