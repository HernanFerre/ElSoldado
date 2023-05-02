#pragma once
#ifndef RIFLE_H
#define RIFLE_H

#include "Arma.h"

class Rifle : public Arma{
public:
	Rifle(string nom) { _nombre = nom; };
	virtual ~Rifle() {};
	string disparar() override;
};

#endif // !RIFLE_H

