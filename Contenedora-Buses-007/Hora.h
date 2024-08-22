#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Hora {
	private:
		int horas;
		int minutos;
		int segundos;
	public:
		Hora(int = 0, int = 0, int = 0);  // Constructor conjunto...
		virtual ~Hora();
		// Accesores...get's
		// Mutadores...set's
		string toString();
};
