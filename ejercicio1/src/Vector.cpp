/*
 * Vector.cpp
 *
 *  Created on: 14 sept. 2022
 *      Author: Alumno
 */

#include "Vector.h"

Vector::Vector() {
	// TODO Auto-generated constructor stub

}

Vector::~Vector() {
	// TODO Auto-generated destructor stub
}
Producto& Vector::operator[](int pos)const{
	if(pos>=0 && pos<=max){
		return this->arreglo[pos];
	}else{
		cerr<<"Posicion invalida pibe"<<endl;
		return this->arreglo[0];
	}
}
