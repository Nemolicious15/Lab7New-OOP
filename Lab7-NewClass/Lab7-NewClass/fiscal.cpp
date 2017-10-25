
#include "fiscal.h"

#include<iostream>
#include<string.h>
using namespace std;


void Fiscal::setID(int nr){
	this->ID = nr;
}
int Fiscal::getID(){
	return ID;
}


Fiscal::Fiscal(){
	//cout << "Constructor implicit 1" << endl;
	
	ID = 0;
}


Fiscal::Fiscal(int p){
	//cout << "Contsructor cu parametrii-" << endl;
	ID = p;
}

Fiscal::Fiscal(Fiscal &s){
	// cout<< "COpiere"<<endl;
	ID = s.ID;
	
}
Fiscal::~Fiscal(){
	//cout << "Destructor" << endl;
	ID = 0;
}
bool Fiscal::operator==(Fiscal &s){

	if ((this->ID == s.ID)) return true;
	else return false;

}

Fiscal& Fiscal::operator=(Fiscal &s){

	this->ID = s.ID;
	return *this;

}



