#include "videojuego.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "juego.h"
#include "nrandom.h"

videojuego::videojuego() {

}

void videojuego::inicio() {
	juego juego;
	nrandom nrandom;
	int numerorandom = nrandom.crearnrandom();

	juego.menu();

	int eleccion;
	cin >> eleccion;
	system("cls");

	switch (eleccion)
	{
	case 1:  juego.sologame(numerorandom);	break;
	case 2:	 juego.duogame(numerorandom);	break;
	case 3:  {
		juego.numeroIntentos();
		system("cls");
		juego.menu();
		cout << juego.getIntentos() << "\n";

		int eleccion;
		cin >> eleccion;
		system("cls");
		switch (eleccion)
		{
		case 1:			juego.sologame(numerorandom);					break;
		case 2:			juego.duogame(numerorandom);					break;
		case 3: {
			juego.numeroIntentos();
			system("cls");
			juego.menu();
			cout << juego.getIntentos() << "\n";

			int eleccion;
			cin >> eleccion;
			system("cls");



		}							break;
		case 4:			juego.salir();									break;
		default: {
			cout << "Elija un numero del 1 al 4" << "\n";
			system("pause");
			system("cls");
			inicio();
		}		break;
		}


	}							break;
	case 4:			juego.salir();									break;
	default: {
		cout << "Elija un numero del 1 al 4" << "\n";
		system("pause");
		system("cls");
		inicio();
	}		break;
	}
}