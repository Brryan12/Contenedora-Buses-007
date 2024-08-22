#include"Bus.h"

Bus::Bus(string mar, string mod, string pla, int nP, Ruta* ptrRut, Chofer* ptrChof) {
	marca = mar;
	modelo = mod;
	placa = pla;
	numPasajeros = nP;
	rut = ptrRut;
	chof = ptrChof;
}

Bus:: ~Bus() {
	if (rut != nullptr)  delete rut;
	if (chof != nullptr)  delete chof;
	cout << "Bus eliminado" << endl;
}

//Accesores
string Bus::getMarca() const { return marca; }
string Bus::getModelo() const { return modelo; }
string Bus::getPlaca() const { return placa; }
int Bus::getNumPasajeros() const { return numPasajeros; }
Ruta* Bus::getRuta()const { return rut; }
Chofer* Bus::getChofer()const { return chof; }
//Mutadores
void Bus::setMarca(string mar) { marca = mar; }
void Bus::setModelo(string mod) { modelo = mod; }
void Bus::setPlaca(string pla) { placa = pla; }
void Bus::setNumPasajeros(int numPas) { numPasajeros = numPas; }
void Bus::setRuta(Ruta* ruta) { rut = ruta; }
void Bus::setChofer(Chofer* chofe) { chof = chofe; }

// toString
string Bus::toString() const {
	stringstream s;
	s << "-------------Bus--------------" << endl
		<< "Marca.." << marca << endl
		<< "Modelo.." << modelo << endl
		<< "Placa.." << placa << endl
		<< "El numero de pasajeros.." << numPasajeros << endl;
	if (rut)
		s << rut->toString() << endl;
	else
		s << "No tiene asignada una Ruta" << endl;
	if (chof)
		s << chof->toString() << endl;
	else
		s << "Este bus no tiene asignado chofer." << endl;
	s << "---------------------------------" << endl;
	return s.str();
}