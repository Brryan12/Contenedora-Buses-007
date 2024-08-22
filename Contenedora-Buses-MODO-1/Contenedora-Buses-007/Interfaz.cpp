#include "Interfaz.h"


Contenedora* Interfaz::ventanaCreaContenedora()
{
	Contenedora* COB = NULL;
	int cantidad;
	cout << "--BIENVENIDO AL PROGRAMA DE CONTROL DE BUSES--" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "Digite la longitud del venctor del contenedor de buses..";
	cin >> cantidad;
	cout << "Creando contenedor de buses para " << cantidad << " buses como maximo." << endl;
	COB = new Contenedora(cantidad);
	cout << "Contenedora creada." << endl;
	Sleep(2000);
	return COB;
}

int Interfaz::macMenu()
{
	int num;
	system("cls");
	cout << endl << endl << endl;
	cout << "----------MENU----------" << endl;
	cout << "  1 - Ingresar Bus.." << endl;
	cout << "  2 - Eliminar bus." << endl;
	cout << "  3 - Editar bus." << endl;
	cout << "  4 - Imprimir bus." << endl;
	cout << "  5 - Imprimir buses." << endl;
	cout << "  6 - Imprimir choferes." << endl;
	cout << "  7 - Imprimir Rutas." << endl;
	cout << "  8 - Salir." << endl;
	cout << "------------------------" << endl;
	cout << "Digite la opcion: ";
	cin >> num;
	return num;
}

Chofer* Interfaz::venChofer()
{
	Chofer* chof = nullptr;
	string cedu, nomb;
	int eda;
	cout << "Primero - Ingresar Bus.." << endl;
	cout << " Primero crear chofer...." << endl;
	cout << " Ingrese su cedula: "; cin >> cedu;
	cout << " Ingrese su nombre: "; cin >> nomb;
	cout << " Ingrese su edad: ";   cin >> eda;
	chof = new Chofer(cedu, nomb, eda);

	return chof;
}

Hora* Interfaz::venHora()
{
	Hora* horPtr = nullptr;
	int hor, min, seg;
	cout << "Segundo: crear hora de salida del bus.." << endl;
	cout << " Ingrese la hora: ";      cin >> hor;
	cout << " Ingrese los minutos: ";  cin >> min;
	cout << " Ingrese los segundos: "; cin >> seg;
	horPtr = new Hora(hor, min, seg);

	return horPtr;
}

Ruta* Interfaz::venRuta(Hora* horPtr)
{
	Ruta* rutaPtr = nullptr;
	string ori, dest;
	double cost;
	cout << "Tercero: crear Ruta con su hora de salida.." << endl;
	cout << " Ingresar el origen: ";  cin >> ori;
	cout << " Ingresar el destino: "; cin >> dest;
	cout << " Ingrese el costo : "; cin >> cost;
	rutaPtr = new Ruta(ori, dest, cost, horPtr);
	return rutaPtr;
}

Bus* Interfaz::venBus(Ruta* rutPtr, Chofer* chof)
{
	Bus* bu=NULL;
	int numPas;
	string  marc, mod, pla;

	cout << "Cuarto: crear bus..." << endl;
	cout << "Ingresar la Marca: "; cin >> marc;
	cout << "Ingresar el Modelo: "; cin >> mod;
	cout << "Ingresar la Placa: "; cin >> pla;
	cout << "Ingresar el Num de pasajeros. "; cin >> numPas;
	bu = new Bus(marc, mod, pla, numPas, rutPtr, chof);
	return bu;
}

void Interfaz::venIngresaBus(Contenedora* COB,Bus* bu)
{
	cout << "Quinto: ingresarlo al Contenedor de buses." << endl;
	if (COB->ingresaBus(bu) == true)
		cout << "Bus Ingresado." << endl;
	else
		cout << "Bus no ingresado, Contenedora llena." << endl;
}
