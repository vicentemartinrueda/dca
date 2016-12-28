/*
 * TVectorCom.cpp
 *
 *  Created on: 12/02/2014
 *      Author: vmr33
 */

#include "tvectorcom.h"

	// Constructor por defecto
	TVectorCom::TVectorCom (){
		c = NULL;
		tamano = 0;
	}

	// Constructor a partir de un tamaño
	TVectorCom::TVectorCom (int x){
		if (x<0)
		{
			c = NULL;
			tamano = 0;
		}
		else
		{
			c = new TComplejo[x];
			tamano = x;
		}
	}

	// Constructor de copia
	TVectorCom::TVectorCom (const TVectorCom &vector){
		c = vector.c;
		tamano = vector.tamano;
	}

	// Destructor
	TVectorCom::~TVectorCom (){
		c = NULL;
		tamano = 0;
	}

	// Sobrecarga del operador asignación
	TVectorCom& TVectorCom::operator= (const TVectorCom& vector){
		if (this != &vector)
				{
					(*this).~TVectorCom();//Libero la memoria
					c = vector.c;
					tamano = vector.tamano;
				}
				return *this;
	}

	// Sobrecarga del operador igualdad
	bool TVectorCom::operator==(const TVectorCom &vector){
		return(this->c == vector.c && this->tamano == vector.tamano);
	}
	// Sobrecarga del operador desigualdad
	bool TVectorCom::operator!=(const TVectorCom &vector){
		return(this->c != vector.c || this->tamano != vector.tamano);
	}
	// Sobrecarga del operador corchete (parte IZQUIERDA)
	TComplejo & TVectorCom::operator[](int x){

	}
	// Sobrecarga del operador corchete (parte DERECHA)
	TComplejo TVectorCom::operator[](int x) const{

	}
	// Tamaño del vector (posiciones TOTALES)
	int TVectorCom::Tamano(){
		return (tamano);
	}
	// Cantidad de posiciones OCUPADAS (TComplejo NO VACIO) en el vector
	int TVectorCom::Ocupadas(){
		if (c != NULL && c != 0)
		{
			int cont=0;
			for (int i=0; i<tamano;i++)
			{
				if (c !=)
			}

		}
	}
	// Devuelve TRUE si existe el TComplejo en el vector
	bool TVectorCom::ExisteCom(TComplejo &tcomplejo){

	}
	// Mostrar por pantalla los elementos TComplejo del vector con PARTE REAL O POSTERIOR al argumento
	void TVectorCom::MostrarComplejos(double x){

	}
	// REDIMENSIONAR el vector de TComplejo
	bool TVectorCom::Redimensionar(int x){

	}

