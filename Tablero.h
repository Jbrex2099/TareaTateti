#ifndef TABLERO_H
#define TABLERO_H


#include<iostream>
#include<iomanip>
#include<cstdio>
#include "Ficha.h"


using namespace std;


class Tablero {
private:
	Ficha mapa[3][3];
	Ficha verificar[3][3];
public:
	Tablero();
	// ubica una ficha en una posicion
	void setFichaIn(int x, int y, char c);
	// muestra el tablero
	void mostrar();
	// retorna si hay una ficha en esa posicion
	bool hayFicha(int x, int y);
	// compara una dos posiciones retorna true si son iguales
	bool compararFichas(int,int,char);
	// verifica que se haya formado tateti
	bool checkTateti();
	// retorna true si el tablero esta completo
	bool isComplete();
};


#endif

