#include "fiscal.h"
#include "Produs.h"
#include<iostream>
#include<string.h>
using namespace std;

void Produs::setID(int i){
	this->ID = i;
}
int Produs::getID(){
	return ID;
}
void Produs::setPret(int t){
	this->pret = t;

}
int Produs::getPret(){
	return pret;
}
Produs::Produs(){
	//consrt implicit
	ID = 0;
	pret = 0;
}
Produs::Produs(int i, int p){
	//constr cu parametrii
	this->ID = i;
	this->pret = p;
}

Produs::Produs(Produs &p){
	//constr copiere
	ID = p.ID;
	pret = p.pret;
	
}
Produs::~Produs(){
	//deconstructor
	ID = 0;
	pret = 0; 
}

Produs& Produs::operator=(Produs &p){
	this->ID = p.ID;
	this->pret = p.pret;
	return *this;
}
bool Produs::operator==(Produs &p){
	if ((this->ID == p.ID) && (this->pret == p.pret))
		return true;
	else return false;
}