#include "Soldado.h"
#include "Arma.h"


void Soldado::recoger_arma(Arma* arma) {
	if (_arma == nullptr) {
		_arma = arma;
	}
	else {
		cout << "Parece que el soldado ya esta equipado con otra arma.." << endl;
	}
}

void Soldado::dejar_arma() {
	_arma = nullptr;
}

void Soldado::disparar_arma() {
	if (_arma != nullptr) {
		cout << _arma->disparar();
	}
	else {
		cout << "Parece que el soldado no tiene ningun arma en sus manos.." << endl;
	}
}

void Soldado::ver_arma_equipada() {
	if (_arma != nullptr) {
		if (_arma->_nombre == "Revolver") {
			cout << "El soldado tiene equipado el 'Revolver'" << endl;
			system("Pause");
		}
		else if (_arma->_nombre == "Rifle") {
			cout << "El soldado tiene equipado el 'Rifle'" << endl;
			system("Pause");
		}
		else if (_arma->_nombre == "Escopeta") {
			cout << "El soldado tiene equipado la 'Escopeta'" << endl;
			system("Pause");
		}
	}else {
		cout << "Parece que el soldado no tiene ningun arma en sus manos.." << endl;
		system("Pause");
	}

}

