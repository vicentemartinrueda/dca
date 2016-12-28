/*
 * tvectorcom.h
 *
 *  Created on: 12/02/2014
 *      Author: vmr33
 */

#ifndef TVECTORCOM_H_
#define TVECTORCOM_H_

#include <iostream>
#include "tcomplejo.h"

using namespace std;

class TVectorCom {
private:
	TComplejo *c;
	int tamano;
public:
	//FORMA CANONICA

	// Constructor por defecto
	TVectorCom ();
	// Constructor a partir de un tamaño
	TVectorCom (int);
	// Constructor de copia
	TVectorCom (const TVectorCom &);
	// Destructor
	~TVectorCom ();
	// Sobrecarga del operador asignación
	TVectorCom & operator=(const TVectorCom &);

	///MÉTODOS

	// Sobrecarga del operador igualdad
	bool operator==(const TVectorCom &);
	// Sobrecarga del operador desigualdad
	bool operator!=(const TVectorCom &);
	// Sobrecarga del operador corchete (parte IZQUIERDA)
	TComplejo & operator[](int);
	// Sobrecarga del operador corchete (parte DERECHA)
	TComplejo operator[](int) const;
	// Tamaño del vector (posiciones TOTALES)
	int Tamano();
	// Cantidad de posiciones OCUPADAS (TComplejo NO VACIO) en el vector
	int Ocupadas();
	// Devuelve TRUE si existe el TComplejo en el vector
	bool ExisteCom(TComplejo &);
	// Mostrar por pantalla los elementos TComplejo del vector con PARTE REAL O POSTERIOR al argumento
	void MostrarComplejos(double);
	// REDIMENSIONAR el vector de TComplejo
	bool Redimensionar(int);

	////FUNCIONES AMIGAS

	// Sobrecarga del operador salida
	friend ostream & operator<<(ostream &, TVectorCom &);

};

#endif /* TVECTORCOM_H_ */
