#pragma once
#ifndef ARMA_H
#define ARMA_H

#include<string>
#include "Soldado.h"

using namespace std;

class Soldado;

class Arma {		
public:
	string _nombre;
	virtual ~Arma() {};
	virtual string disparar() = 0;
};


#endif // !ARMA_H