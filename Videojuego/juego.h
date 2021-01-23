#pragma once
#include <iostream>
#include <string>
#include "player.h"

using namespace std;

class juego
{
private:
	bool juegoActivo;
	player* jugador1;
	player* jugador2;
	int intentos;

public:
	juego();
	void menu();
	void sologame(int);
	void duogame(int);
	int numeroIntentos();
	int getIntentos() { return intentos; };
	void salir();
};
