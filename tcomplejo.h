/*
 * tcomplejo.h
 *
 *  Created on: 06/02/2014
 *      Author: vmr33
 */

#ifndef TCOMPLEJO_H_
#define TCOMPLEJO_H_

#include <iostream>

using namespace std;

class TComplejo {
private:
	double re ; // PARTE REAL
	double im ; // PARTE IMAGINARIA

public:
	//FORMA CANONICA

	//Constructor por defecto : PARTE REAL e IMAGINARIA
	TComplejo ();
	//inicializadas a 0
	//Constructor a partir de la PARTE REAL
	TComplejo (double );
	//Constructor a partir de la PARTE REAL e IMAGINARIA
	TComplejo (double , double);
	//Constructor copia
	TComplejo (const TComplejo&);
	//Destructor
	~TComplejo();
	// Sobrecarga del operador asignación
	TComplejo& operator= (const TComplejo &);


	// SOBRECARGA DE OPERADORES ARITMÉTICOS;
	TComplejo operator+ (const TComplejo&);
	TComplejo operator- (const TComplejo&);
	TComplejo operator* (const TComplejo&);
	TComplejo operator+ (double);
	TComplejo operator- (double);
	TComplejo operator* (double);
	friend TComplejo operator+ (double , TComplejo&);
	friend TComplejo operator- (double , TComplejo&);
	friend TComplejo operator* (double , TComplejo&);


	// OTROS OPERADORES
	bool operator== (TComplejo &); // IGUALDAD de números complejos
	bool operator!= (TComplejo &); // DESIGUALDAD de números complejos
	double Re(); // Devuelve PARTE REAL
	double Im(); // Devuelve PARTE IMAGINARIA
	void Re(double); // Modifica PARTE REAL
	void Im(double); // Modifica PARTE IMAGINARIA
	double Arg(void); // Calcula el Argumento (en Radianes)
	double Mod(void); // Calcula el Módulo


	// Sobrecarga del operador SALIDA
	friend ostream & operator<<(ostream &, TComplejo &);


};

#endif /* TCOMPLEJO_H_ */
