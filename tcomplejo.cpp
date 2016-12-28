/*
 * tcomplejo.cpp
 *
 *  Created on: 06/02/2014
 *      Author: vmr33
 */

#include "tcomplejo.h"
#include <math.h>

//Constructor por defecto : PARTE REAL e IMAGINARIA
	TComplejo::TComplejo (){
		re =0;
		im = 0;
	}
	//inicializadas a 0
	//Constructor a partir de la PARTE REAL
	TComplejo::TComplejo (double real){
		re = real;
		im = 0;
	}
	//Constructor a partir de la PARTE REAL e IMAGINARIA
	TComplejo::TComplejo (double real, double imag){
		re = real;
		im = imag;
	}
	//Constructor copia
	TComplejo::TComplejo (const TComplejo& tcomplejo){
		re = tcomplejo.re;
		im = tcomplejo.im;
	}
	//Destructor
	TComplejo::~TComplejo(){
		re = 0;
		im = 0;
	}
	// Sobrecarga del operador asignación
	TComplejo& TComplejo::operator= (const TComplejo& tcomplejo){
		if (this != &tcomplejo)
		{
			(*this).~TComplejo();//Libero la memoria
			re = tcomplejo.re;
			im = tcomplejo.im;
		}
		return *this;
	}

	TComplejo TComplejo::operator+ (const TComplejo &tcomplejo){
		TComplejo x(this->re + tcomplejo.re, this->im + tcomplejo.im);
		return(x);
	}

	TComplejo TComplejo::operator- (const TComplejo &tcomplejo){
		TComplejo x(this->re - tcomplejo.re, this->im - tcomplejo.im);
		return(x);
	}

	TComplejo TComplejo::operator* (const TComplejo &tcomplejo){
		TComplejo x(this->re * tcomplejo.re, this->im * tcomplejo.im);
		return(x);
	}

	TComplejo TComplejo::operator+ (double real){
		TComplejo x(this->re + real, this->im);
		return(x);
	}

	TComplejo TComplejo::operator- (double real){
		TComplejo x(this->re - real, this->im);
		return(x);
	}

	TComplejo TComplejo::operator* (double real){
		TComplejo x(this->re * real, this->im);
		return(x);
	}

	TComplejo operator+ (double real, TComplejo &tcomplejo){
		TComplejo x(tcomplejo.re + real, tcomplejo.im);
		return(x);
	}

	TComplejo operator- (double real, TComplejo &tcomplejo){
		TComplejo x(tcomplejo.re - real, tcomplejo.im);
		return(x);
	}

	TComplejo operator* (double real, TComplejo &tcomplejo){
		TComplejo x(tcomplejo.re * real, tcomplejo.im);
		return(x);
	}


	bool TComplejo::operator== (TComplejo &tcomplejo){ // IGUALDAD de números complejos
		return(this->re == tcomplejo.re && this->im == tcomplejo.im);
	}
	bool TComplejo::operator!= (TComplejo &tcomplejo){ // DESIGUALDAD de números complejos
		return(this->re != tcomplejo.re || this->im != tcomplejo.im);
	}
	double TComplejo::Re(){ // Devuelve PARTE REAL
		return(re);
	}
	double TComplejo::Im(){ // Devuelve PARTE IMAGINARIA
		return(im);
	}
	void TComplejo::Re(double real){ // Modifica PARTE REAL
			re=real;
	}
	void TComplejo::Im(double imag){ // Modifica PARTE IMAGINARIA
			im=imag;
	}
	double TComplejo::Arg(void){ // Calcula el Argumento (en Radianes)
		return((double) atan2(im,re));
	}
	double TComplejo::Mod(void){ // Calcula el Módulo
		return((double) sqrt(pow(re,2) + pow(im,2)));
	}


	// Sobrecarga del operador SALIDA
	ostream & operator<<(ostream &os, TComplejo &tcomplejo){
		os.setf(ios::fixed);
		os.precision(2);

		os << "(" << tcomplejo.Re() << " " << tcomplejo.Im() << ")";
		return os;
	}

