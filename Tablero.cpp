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

bool Tablero::compararFichas(int x, int y){
	Ficha f;
	f.setFigura('X');
	return mapa[x][y].compare(f);
}

bool Tablero::checkTateti(){
	bool victoria = false;
	if((compararFichas(0,0))==(compararFichas(0,1))&&(compararFichas(0,1))==(compararFichas(0,2))){
		return victoria = true;
	}
	if((compararFichas(1,0))==(compararFichas(1,1))&&(compararFichas(1,1))==(compararFichas(1,2))){
		return victoria = true;
	}
	if((compararFichas(2,0))==(compararFichas(2,1))&&(compararFichas(2,1))==(compararFichas(2,2))){
		return victoria = true;
	}
	if((compararFichas(0,0))==(compararFichas(1,0))&&(compararFichas(1,0))==(compararFichas(2,0))){
		return victoria = true;
	}
	if((compararFichas(0,1))==(compararFichas(1,1))&&(compararFichas(1,1))==(compararFichas(2,2))){
		return victoria = true;
	}
	if((compararFichas(0,2))==(compararFichas(1,2))&&(compararFichas(1,2))==(compararFichas(2,2))){
		return victoria = true;
	}
	if((compararFichas(0,0))==(compararFichas(1,1))&&(compararFichas(1,1))==(compararFichas(2,2))){
		return victoria = true;
	}
	if((compararFichas(0,2))==(compararFichas(1,1))&&(compararFichas(1,1))==(compararFichas(2,0))){
		return victoria = true;
	}
		return victoria;
}


//bool Juego::checkTermino(){}

bool Tablero::hayFicha(int x, int y) {
	return mapa[x][y].getFigura() != ' ';
}

//bool Tablero::isComplete(){}
