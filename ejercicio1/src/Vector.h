/*
 * Vector.h
 *
 *  Created on: 14 sept. 2022
 *      Author: Alumno
 */

#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include "Producto.h"
typedef int item;
class Vector {
private:
	int max;
public:
	Vector();
	virtual ~Vector();
	bool reservarMemoria(int dim);
	void getCapacidad();
	//vector <Producto*> P;//xd
	Producto *arreglo;
	Producto& operator[](int pos)const;
};

#endif /* VECTOR_H_ */
