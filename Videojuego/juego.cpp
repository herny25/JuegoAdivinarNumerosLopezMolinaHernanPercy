#include "juego.h"
#include "player.h"
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <stdlib.h>

juego::juego()
{
	juegoActivo = true;
	jugador1 = 0;
	jugador2 = 0;
	intentos = 3;
}
void juego::menu() {
	cout << "Bienvenidos a adivina el numero" << "\n\n";
	cout << "1. Un Jugador" << "\n\n";
	cout << "2. Dos Jugadores" << "\n\n";
	cout << "3. Cambiar numero de intentos" << "\n\n";
	cout << "4. Salir" << "\n\n";
}

void juego::salir() {
	exit(0);
}

int juego::numeroIntentos() {
	cout << "Elija el numero de intentos del 1 al 10" << "\n";
	int inten;
	cin >> inten;
	intentos = inten;
	return intentos;
}

void juego::sologame(int numerorandom) {
	player jugador1;
	jugador1.setNombre();
	string nombre = jugador1.getNombre();
	int respuesta;
	int i = intentos;
	while (i != 0)
	{
		cout << "Es tu turno " << nombre << " tienes " << i << " intentos." << "\n" << "A jugar!" << "\n";
		cin >> respuesta;
		if (respuesta > numerorandom)
		{
			cout << "\nEs un numero menor" << "\n\n";
		}
		else if (respuesta < numerorandom) {
			cout << "\nEs un numero mayor" << "\n\n";
		}
		else {
			cout << "\nFelicidades ganaste...!!!" << "\n\n";
			system("pause");
			exit(0);
		}
		i--;
	}
	cout << "Perdiste, buen intento" << "\n";
}

void juego::duogame(int numerorandom) {
	player jugador1;
	jugador1.setNombre();
	string nombre1 = jugador1.getNombre();
	player jugador2;
	jugador2.setNombre();
	string nombre2 = jugador2.getNombre();
	int respuesta;
	int i = intentos;
	while (i != 0)
	{
		cout << "Es tu turno " << nombre1 << " tienes " << i << " intentos." << "\n" << "A jugar!" << "\n";
		cin >> respuesta;
		if (respuesta > numerorandom)
		{
			cout << "\nEs un numero menor" << "\n\n";
		}
		else if (respuesta < numerorandom) {
			cout << "\nEs un numero mayor" << "\n\n";
		}
		else {
			cout << "\nFelicidades ganaste...!!!" << "\n\n";
			system("pause");
			exit(0);
		}
		cout << "Es tu turno " << nombre2 << " tienes " << i << " intentos." << "\n" << "A jugar!" << "\n";
		cin >> respuesta;
		if (respuesta > numerorandom)
		{
			cout << "\nEs un numero menor" << "\n\n";
		}
		else if (respuesta < numerorandom) {
			cout << "\nEs un numero mayor" << "\n\n";
		}
		else {
			cout << "\nFelicidades ganaste...!!!" << "\n\n";
			system("pause");
			exit(0);
		}
		i--;
	}
	cout << "\nPerdiste" << "\n";
}