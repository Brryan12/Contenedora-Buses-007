#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Chofer {
	private:
		string cedula;
		string nombre;
		int edad;
	public:
		Chofer();     // Constr. por defecto
		Chofer(string ced, string nom, int ed);  // constructor Parametrizado.
		virtual ~Chofer();
		string toString();

		void setCedula(string ced);
		void setNombre(string nom);
		void setEdad(int ed);
		string getCedula();
		string getNombre();
		int getEdad();

		bool comparaEdadCon(Chofer* pPtr);
		void cambiarElnombreA(Chofer* pPtr);
};
