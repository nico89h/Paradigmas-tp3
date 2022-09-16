#ifndef PRODUCTO_H_
#define PRODUCTO_H_
#include <iostream>
using namespace std;
//inicio de la creacion de la clase producto
class Producto {
private:
	int codigo;
	string cadena;
	float precioBase;
	static const float IVA;
public:
	Producto();
	Producto(int Codigo,string Cadena, float PrecioBase);
	virtual ~Producto();
	void listarInformacion();
	float calcularPrecioDeVenta();
};

#endif /* PRODUCTO_H_ */
