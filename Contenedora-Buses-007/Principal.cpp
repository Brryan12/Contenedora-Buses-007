#include <string>
#include "Interfaz.h"

// MODO-2

int main() {
	// MODO-1
	// Primero se crean los contenedores a utilizar. Se crea el contenedor de Buses. 
	int cantidad, num, eda, hor, min, seg, numPas;
	string cedu, nomb, ori,dest, marc, mod, pla;
	double cost;
	Hora* horPtr = nullptr;
	Ruta* rutPtr = nullptr;
	Chofer* chof = nullptr;
	Bus* bu = nullptr;
	Contenedora* COB = nullptr;

	COB = Interfaz::ventanaCreaContenedora();

	do {
		//Aqui arranca el menu y retorna al main una opcion
		num = Interfaz::macMenu();
		switch (num) {
				case 1: {
					chof = Interfaz::venChofer();
					horPtr = Interfaz::venHora();

					// origen,destino,costo,horaSalid
					rutPtr = Interfaz::venRuta(horPtr);

					// marca modelo placa numero de pasajeros.
					bu = Interfaz::venBus(rutPtr, chof);


				} 
				break;
				case 2: cout << "  2 - Eliminar bus." << endl;
					cout << "Digite la placa a eliminar....";
					cin >> pla;
					if (COB->existeBusPlaca(pla) == true) {
						cout << "Dicha placa si existe y se procedera a eliminar el bus." << endl;
						if (COB->eliminarBusPlaca(pla) == true)
							cout << "La placa: " << pla << " ya fue eliminada." << endl;
					}
					else {
						cout << "Esa placa no existe." << endl;
					}
					break;
				case 3: cout << "  3 - Editar bus." << endl;

					break;
				case 4: cout << "  4 - Imprimir bus." << endl;
					cout << "Digite la placa del bus que desea imprimir...";
					cin >> pla;
					cout << "-----------------BUS----------------------" << endl;
					if (COB->posicDeLaPlaca(pla) != -1)
						cout << COB->getBusPlaca(pla)->toString() << endl;
					else
						cout << "Bus no existe." << endl;
					break;
				case 5: cout << "  5 - Imprimir buses." << endl;
					cout << COB->toString() << endl;
					break;
				case 6: cout << "  6 - Imprimir choferes." << endl;
					cout << "------------CHOFERES---------------" << endl;
					cout << COB->deChoferes() << endl;
					break;
				case 7: cout << "  7 - Imprimir Rutas." << endl;
					cout << "--------------RUTAS----------------" << endl;
					cout << COB->deRutas() << endl;
					break;
				case 8: cout << "  8 - Salir." << endl;
					cout << "Gracias..." << endl;
					break;
		
		};  // fin del switch
		system("pause");
	} while (num != 8); // fin del do{ }while();

	system("cls");
	cout << "Gracias." << endl;
	return 0;
}