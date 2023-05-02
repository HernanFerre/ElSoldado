#pragma once
#ifndef SOLDADO_H
#define SOLDADO_H
#include<iostream>
using namespace std;


#include "Arma.h"

class Arma;

class Soldado {
	Arma* _arma;
public:
	Soldado() { _arma = nullptr; };
	~Soldado() {};
	void recoger_arma(Arma* arma);
	void dejar_arma();
	void disparar_arma();
	void ver_arma_equipada();
};


#endif // !SOLDADO_H