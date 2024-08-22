#pragma once
#include "Contenedora.h"
#include <Windows.h>
#include <sstream>

class Interfaz {
public:
	static Contenedora* ventanaCreaContenedora();
	static int macMenu();
	static Chofer* venChofer();
	static Hora* venHora();
	static Ruta* venRuta(Hora* horPtr);
	static Bus* venBus(Ruta* rutPtr, Chofer* chof);
	void venIngresaBus(Contenedora* COB, Bus* bu);
};