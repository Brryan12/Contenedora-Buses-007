#include"Ruta.h"

Ruta::Ruta(string ori, string des, double cos, Hora* ptr) {
	origen = ori;
	destino = des;
	costo = cos;
	horPtr = ptr;
}

Ruta::~Ruta() {
	
	if (horPtr != nullptr)   // El objeto tiene un hora vinculada..
		delete horPtr;     // delete nullptr;
	cout << "Ruta eliminada." << endl;
}
//Accesores 
string Ruta::getOrigen() { return origen; }
string Ruta::getDestino() { return destino; }
double Ruta::getCosto() { return costo; }
Hora* Ruta::getHora() { return horPtr; }
//Mutadores.
void Ruta::setOrigen(string ori) { origen = ori; }
void Ruta::setDestino(string des) { destino = des; }
void Ruta::setCosto(double coste) { costo = coste; }
void Ruta::setHora(Hora* hPtr) { horPtr = hPtr; }

// toString de la Ruta
string Ruta::toString() {
	stringstream s;
	s << "-------------------Ruta------------------" << endl
		<< "Origen: " << origen << endl
		<< "Destino: " << destino << endl
		<< "Costo de viaje: " << costo << " colones." << endl;
	if (horPtr)                        //  if(horPtr != nullptr)
		s << horPtr->toString() << endl;
	else
		s << "No tiene hora vinculada.." << endl;
	s << "------------------------------------------" << endl;
	return s.str();
}