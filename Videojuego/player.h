#pragma once
#include <iostream>
#include <string>

using namespace std;

class player
{
private:
	string nombre;
public:
	player();
	void setNombre();
	string getNombre() { return nombre; };
};