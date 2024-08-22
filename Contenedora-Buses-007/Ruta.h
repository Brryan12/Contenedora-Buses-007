#pragma once
#include"Hora.h"

class Ruta {
	private:
		string origen;
		string destino;
		double costo;
		Hora* horPtr;
	public:
		Ruta(string = " ", string = " ", double = 0, Hora* = nullptr);  // Construc. Conjunto
		virtual ~Ruta();
		//Accesores 
		string getOrigen();
		string getDestino();
		double getCosto();
		Hora* getHora();
		//Mutadores.
		void setOrigen(string);
		void setDestino(string);
		void setCosto(double);
		void setHora(Hora*);
		// toString.
		string toString();
};
