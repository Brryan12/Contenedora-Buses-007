#include"Contenedora.h"

Contenedora::Contenedora(int val) {
	can = 0;
	tam = val;
	vec = new Bus * [tam];
	for (int i = 0; i < tam; i++)   // Limpieza del vector...
		vec[i] = nullptr;
}

Contenedora:: ~Contenedora() {
	for (int i = 0; i < can; i++)
		delete vec[i];
	delete[] vec;
	cout << "Contenedor Eliminado.." << endl;
}

bool Contenedora::ingresaBus(Bus* pun) {
	if (can < tam) {
		vec[can++] = pun;
		return true;
	}
	else
		return false;
}

bool Contenedora::existeBusPlaca(string pla) {
	for (int i = 0; i < can; i++)
		if (pla == vec[i]->getPlaca())
			return true;
	return false;
}

bool Contenedora::eliminarBusPlaca(string pla) {
	int posPlac;
	if (existeBusPlaca(pla) == true) {
		posPlac = posicDeLaPlaca(pla);
		// Corrimiento hacia la izquierda.
		for (int i = posPlac; i < can; i++)
			vec[i] = vec[i + 1];
		can--;

		return true;
	}
	else
		return false;
}

int Contenedora::posicDeLaPlaca(string pla) {
	for (int i = 0; i < can; i++)
		if (pla == vec[i]->getPlaca())
			return i;
	return -1;
}

Bus* Contenedora::getBusPlaca(string pla) {
	if (existeBusPlaca(pla) == true) {
		for (int i = 0; i < can; i++)
			if (pla == vec[i]->getPlaca())
				return vec[i];
	}
	else
		return nullptr;
}

string Contenedora::deChoferes() {
	stringstream s;
	for (int i = 0; i < can; i++) {
		if (vec[i]->getChofer() != nullptr) {
			s << vec[i]->getChofer()->toString() << endl;
		}
	}
	return s.str();
}

string Contenedora::deRutas() {
	stringstream s;
	for (int i = 0; i < can; i++) {
		if (vec[i]->getRuta() != nullptr) {
			s << vec[i]->getRuta()->toString() << endl;
		}
	}
	return s.str();
}

string Contenedora::toString() {
	stringstream s;
	s << "----------Listado de Buses----------" << endl;
	for (int i = 0; i < can; i++)
		s << vec[i]->toString() << endl;
	s << "------------Fin del listado------------" << endl;
	return s.str();
}