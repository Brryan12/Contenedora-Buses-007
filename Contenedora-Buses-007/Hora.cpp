#include"Hora.h"  // Incluir el (.h) de Hora..

Hora::Hora(int h, int m, int s) {
	horas = h;
	minutos = m;
	segundos = s;
}

Hora::~Hora() {
	cout << "Eliminando hora" << endl;
}

// Accesores...
// Mutadores...

string Hora::toString() {
	stringstream s;
	s << "Hora = " << horas << ":" << minutos << ":" << segundos << endl;
	return s.str();
}