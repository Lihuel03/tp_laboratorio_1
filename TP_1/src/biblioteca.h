/*
 * biblioteca.h
 *
 *  Created on: 25 sep. 2021
 *      Author: Lihuel
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

/// @brief muestra menu y pide una opcion
///
/// @return devuelve un entero

 int ingresarmenu();


 /// @brief pide flotante
 ///
 /// @return devuelve un flotante
 float pedirflotante();


 /// @brief suma numeros
 ///
 /// @param numero1 recibe el primer numero a sumar
 /// @param numero2 recibe el segundo numero a sumar
 /// @return devuelve la suma de los 2 numeros
 float sumarnumero(float numero1, float numero2);


 /// @brief resata numeros
 ///
 /// @param numero1 recibe el primer numero a restar
 /// @param numero2 recibe el sefundo numero a restar
 /// @return devuelve la resta de los 2 numeros
 float restarnumero(float numero1, float numero2);


 /// @brief divide los numeros
 ///
 /// @param numero1 pide el primero numero a dividir
 /// @param numero2 pide el segundo numero a dividir
 /// @param resultado devuelve el resultado de la division
 /// @return devuelve en caso de funcionar el resultado
 float dividirnumero(float numero1, float numero2, float *resultado);

 /// @brief multiplica numeros
 ///
 /// @param numero1 pide el primer numero a multiplicar
 /// @param numero2 pide el segundo numero a multiplicar
 /// @return devuelve el resultado de la division
 float multiplicarnumero(float numero1, float numero2);

 /// @brief devuelve el factorial del numero ingresado
 ///
 /// @param numero devuelve el factorial, del numero anteriormente ingresado
 /// @return devuelve el flotante
 int calcularfactorial(float numero);

 /// @brief muestra el resultado de la suma
 ///
 /// @param numero1 muestra el primer numero a sumar
 /// @param numero2 muestra el segundo numero a sumar
 /// @param resultado muestra el resultado de la suma
 void resultadosuma(float numero1,float numero2,float resultado);

 /// @brief muestra el resultado de la resta
 ///
 /// @param numero1 muestra el primer numero a restar
 /// @param numero2 muestra el segundo numero a restar
 /// @param resultado muestra el resultado de la resta
 void resultadoresta(float numero1,float numero2,float resultado);

 /// @brief  muestra el resultado de la division
 ///
 /// @param numero1 muestra el numero a dividir
 /// @param numero2 muestra el numero que divide
 /// @param resultado muestra el resultado de la division
 void resultadodivision(float numero1,float numero2,float resultado);

 /// @brief muestra el resultado de la multiplicacion
 ///
 /// @param numero1 muestra el primer numero a multiplicar
 /// @param numero2 muestra el segundo numero a multiplicar
 /// @param resultado muestra el resultado de la multiplicacion
 void resultadomultiplicacion(float numero1, float numero2, float resultado);

 /// @brief muestra el factorial de los numeros ingresados
 ///
 /// @param numero muestra el numero a factorear
 /// @param resultado  muestra el resultado del numero factoreado
 void resultadofactorial(float numero, float resultado);
#endif /* BIBLIOTECA_H_ */
