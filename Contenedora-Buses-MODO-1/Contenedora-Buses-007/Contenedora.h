#pragma once
#include"Bus.h"

class Contenedora {  // Forma No.4
	private:
		Bus** vec;
		int can;
		int tam;
	public:
		Contenedora(int val);
		virtual ~Contenedora();
		bool ingresaBus(Bus* per);
		bool existeBusPlaca(string pla);
		bool eliminarBusPlaca(string pla);
		int posicDeLaPlaca(string pla);
		Bus* getBusPlaca(string pla);
		string deChoferes();
		string deRutas();
		string toString();

};
