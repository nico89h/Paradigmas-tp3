/*
 * Vector.cpp
 *
 *  Created on: 14 sept. 2022
 *      Author: Alumno
 */

#include <iostream>
using namespace std;
#include "Vector.h"

Vector::Vector() {
	// TODO Auto-generated constructor stub
	//inicio de la creacion de el vector
	this->max=0;
	this->arreglo=new Producto[max];
}

void Vector::getCapacidad(){
	cout<<"La capacidad des esta: "<<this->max<<endl;
}

bool Vector::reservarMemoria(int dim){
	//se destruye el arreglo creado en el constructor
	delete this->arreglo;
	this->max=dim;
	this->arreglo=new Producto[max];
	return (dim>=0);
}

Vector::~Vector() {
	// TODO Auto-generated destructor stub
	//aca se tienen que eliminar los datos
	this->max=0;
	//no se eliminan los datos de el arreglo porque la relacion es de agregacion
	//delete arreglo; se usa para la composicion
}

Producto& Vector::operator[](int pos)const{
	if(pos>=0 && pos<=max){
		return this->arreglo[pos];
	}else{
		cerr<<"Posicion invalida pibe"<<endl;
		return this->arreglo[0];
	}
}
