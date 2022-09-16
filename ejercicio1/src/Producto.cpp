/*
 * Producto.cpp
 *
 *  Created on: 14 sept. 2022
 *      Author: Alumno
 */

#include "Producto.h"
#include <iostream>
using namespace std;
Producto::Producto(int Codigo,string Cadena, float PrecioBase) {
	// TODO Auto-generated constructor stub
	this->codigo=Codigo;
	this->cadena=Cadena;
	this->precioBase=PrecioBase;
}
Producto::Producto(){
	// TODO Auto-generated constructor stub
	this->codigo=0;
	this->cadena="Inicio";
	this->precioBase=0.0;
}
const float Producto::IVA=0.21;
//inicio de la creacion de la clase
Producto::~Producto() {
	// TODO Auto-generated destructor stub
}
void Producto::listarInformacion(){
	cout<<"Los datos del producto son:"<<endl;
	cout<<"Codigo "<<this->cadena<<endl;
	cout<<"Precio base "<<this->precioBase<<endl;
}
float Producto::calcularPrecioDeVenta(){
	return precioBase*IVA;
}
