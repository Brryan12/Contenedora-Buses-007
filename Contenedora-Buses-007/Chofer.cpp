#include"Chofer.h"

Chofer::Chofer() {
	cedula = "indef";
	nombre = "indef";
	edad = 0;
}

Chofer::Chofer(string ced, string nom, int ed) {
	cedula = ced;
	nombre = nom;
	edad = ed;
}

Chofer::~Chofer() {
	cout << "Eliminando chofer" << endl;
}

string Chofer::toString() {
	stringstream s;
	s << "Cedula: " << cedula << endl
		<< "Nombre: " << nombre << endl
		<< "Edad:  " << edad << endl << endl;
	return s.str();
}

void Chofer::setCedula(string ced) { cedula = ced; }
void Chofer::setNombre(string nom) { nombre = nom; }
void Chofer::setEdad(int ed) { edad = ed; }

string Chofer::getCedula() { return cedula; }
string Chofer::getNombre() { return nombre; }
int Chofer::getEdad() { return edad; }

bool Chofer::comparaEdadCon(Chofer* pPtr) {
	if (edad > pPtr->getEdad())
		return true;
	else
		return false;
}

void Chofer::cambiarElnombreA(Chofer* pPtr) {
	string nom;
	cout << "Digite un nuevo nombre...";
	cin >> nom;
	pPtr->setNombre(nom);
}
