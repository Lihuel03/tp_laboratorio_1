/*
 ============================================================================
 Name        : TP_1.c
 Author      : Lihuel Lazbal
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 1. Ingresar 1er operando (A=x)
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
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void) {
	setbuf(stdout, NULL);
	char seguir;
	seguir = 's';
	int opcionmenu;
	float numero1;
	float numero2;
	float suma;
	float resta;
	float division;
	float multiplicacion;
	float factorial1;
	float factorial2;

	do{
		opcionmenu = ingresarmenu();
		switch(opcionmenu){
		case 1:
			numero1 = pedirflotante();
			break;
		case 2:
			numero2 = pedirflotante();
			break;
		case 3:
			suma = sumarnumero(numero1, numero2);
			resta = restarnumero(numero1, numero2);
			dividirnumero(numero1, numero2, &division);
			multiplicacion = multiplicarnumero(numero1, numero2);
			factorial1 = calcularfactorial(numero1);
			factorial2 = calcularfactorial(numero2);
			break;
		case 4:
			resultadosuma(numero1, numero2, suma);
			resultadoresta(numero1, numero2, resta);
			resultadodivision(numero1, numero2, division);
			resultadomultiplicacion(numero1, numero2, multiplicacion);
			resultadofactorial(numero1, factorial1);
			resultadofactorial(numero2, factorial2);
			break;
		case 5:
			seguir = 'n';
			break;
		}


	}while (seguir == 's');
	return EXIT_SUCCESS;
}
