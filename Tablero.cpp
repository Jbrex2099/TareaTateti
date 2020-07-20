//
// Created by ake on 24/6/20.
//

#include "Tablero.h"

Tablero::Tablero() {
}

void Tablero::setFichaIn(int x, int y, char c){
	mapa[x][y].setFigura(c);
}

void Tablero::mostrar() {
	int posicion=1;
	cout<<"    A   B   C"<<endl;
	cout<<"  -------------"<<endl;
	for (int i = 0; i<3; i++){
		cout<<posicion;
		cout<<" | ";
		
		for (int j = 0; j<3; j++){
			cout<<mapa[i][j].getFigura()<< " | ";
		}
		cout<<endl;
		cout<<"  -------------"<<endl;
		posicion++;
	}
}

//bool Tablero::hayFicha(int x, int y) {
	//for(int i = 0; i<3; i++){
		//for (int j = 0; j<3; j++){
		//if(mapa[i][j]==
		//}
	//}
//}

//bool Tablero::compararFichas(int x0,int y0,int x1 ,int y1){}

//bool Tablero::isComplete(){}
