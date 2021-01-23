#include "player.h"
player::player() {
	nombre = "";
}
void player::setNombre() {
	string name;
	cout << "Nombre del jugador:" << "\n";
	cin >> name;
	nombre = name;
	system("cls");
}
