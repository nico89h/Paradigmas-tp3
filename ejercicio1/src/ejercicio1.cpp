//============================================================================
// Name        : ejercicio1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Vector.h"
int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Vector jose; //
	bool nose=jose.reservarMemoria(2);
	jose.getCapacidad();
	getchar();
	jose.arreglo[0].listarInformacion();
	return 0;
}
