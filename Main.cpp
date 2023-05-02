#include<iostream>
#include "Soldado.h"
#include "Arma.h"
#include "Revolver.h"
#include "Rifle.h"
#include "Escopeta.h"


using namespace std;

int main() {

	Soldado* soldado = new Soldado();
	Arma* revolver = new Revolver("Revolver");
	Arma* rifle = new Rifle("Rifle");
	Arma* escopeta = new Escopeta("Escopeta");

	int opcion;
	do {
		cout << "\t-== Bienvenido al campo de entrenamiento, Soldado ==-\n\n";
		cout << "¿Que desea hacer?" << endl;
		cout << "(presione el numero correspondiente a la opcion del menu)\n" << endl;
		cout << "1- Recoger arma" << endl;
		cout << "2- Dejar arma" << endl;
		cout << "3- Disparar" << endl;
		cout << "4- Ver arma en uso" << endl;
		cout << "5- Salir" << endl;
		cout << "\nOpcion: ";
		cin >> opcion;

		switch (opcion) {
		case 1:
			system("cls");
			int opc;
			cout << "\nPor favor, escoja el arma que desea utilizar: " << endl;
			cout << "1- Revolver" << endl;
			cout << "2- Rifle" << endl;
			cout << "3- Escopeta" << endl;
			cout << "4- Volver atras" << endl;
			cin >> opc;
			system("pause");
			switch (opc) {
			case 1: soldado->recoger_arma(revolver);
				break;
			case 2: soldado->recoger_arma(rifle);
				break;
			case 3: soldado->recoger_arma(escopeta);
				break;
			case 4:system("cls");
				break;
			}
			break;
		case 2: soldado->dejar_arma();
			break;
		case 3:
			system("cls");
			cout << endl;
			soldado->disparar_arma();
			cout << endl;
			system("pause");
			break;
		case 4: soldado->ver_arma_equipada();
			break;
		case 5:
			break;
		}
		system("cls");
	} while (opcion != 5);

	delete soldado;
	delete revolver;
	delete rifle;
	delete escopeta;

	return 0;

}