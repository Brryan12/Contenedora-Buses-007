#pragma once
#include"Chofer.h"  // iostr
#include"Ruta.h"    

class Bus {
	private:
		string marca;
		string modelo;
		string placa;
		int numPasajeros;
		Ruta* rut;     // flecha..
		Chofer* chof;  // flecha..
	public:
		Bus(string = "", string = "", string = "", int = 0, Ruta* = nullptr, Chofer* = nullptr);
		virtual ~Bus();
		//Accesores
		string getMarca() const;
		string getModelo() const;
		string getPlaca() const;
		int getNumPasajeros() const;
		Ruta* getRuta()const;
		Chofer* getChofer()const;
		//Mutadores
		void setMarca(string mar);
		void setModelo(string mod);
		void setPlaca(string pla);
		void setNumPasajeros(int numPas);
		void setRuta(Ruta* rut);
		void setChofer(Chofer* chof);
		// toString
		string toString() const;
};


