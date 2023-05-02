#pragma once
#ifndef REVOLVER_H
#define REVOLVER_H

#include "Arma.h"

class Revolver : public Arma {
public:
	Revolver(string nom) { _nombre = nom; };
	virtual ~Revolver() {};
	virtual string disparar() override;
};

#endif // !REVOLVER_H