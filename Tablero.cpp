//
// Created by ake on 24/6/20.
//

#include "Tablero.h"

Tablero::Tablero() {
}

void Tablero::setFichaIn(int x, int y, char c){
	mapa[x][y] = c;
}

void Tablero::mostrar() {
	cout<<"    A   B   C"<<endl;
	cout<<"  -------------"<<endl;
	for (int i = 1; i<=3; i++){
		cout<<i;
		cout<<" | ";
		
		for (int j = 1; j<=3; j++){
			cout<<mapa[i][j].getFigura()<< " | ";
		}
		cout<<endl;
		cout<<"  -------------"<<endl;
		
	}
}

//bool Tablero::hayFicha(int x, int y) {

//}

//bool Tablero::compararFichas(int x0,int y0,int x1 ,int y1){}

//bool Tablero::isComplete(){}
