#include "fiscal.h"
#include "bon.h"
#include<iostream>
#include<string.h>
using namespace std;

void Bon::setSum(int s){
	this->sum = s;
}
int Bon::getSum(){
	return sum;
}
void Bon::setNrp(int nr){
	this->nrp = nr;
}
int Bon::getNrp(){
	return nrp;
}
void Bon::setProdus(Produs* p11){
	for (int i = 0; i < getNrp(); i++)
	{
		this->p[i] = p11[i];
	}
}
Produs* Bon::getProdus(){
	return p;
}


Bon::Bon(){
	//consrt implicit
	sum = 0;
	Fiscal(0);
	nrp = 0;
	delete[] p;
}
Bon::Bon(int i, int s, int nr, Produs* p) :Fiscal(i){
	//constr cu parametrii
	this->sum = s;
	this->nrp = nr;
	p = new Produs[10];
}

Bon::Bon(Bon &b) :Fiscal(b){
	//constr copiere
	sum = b.sum;
	nrp = b.nrp;
	p = new Produs[nrp];
	for (int i = 0; i < getNrp(); i++)
	{
		this->p[i] = b.p[i];
	}

}
Bon::~Bon(){
	//deconstructor
	sum = 0;
	nrp = 0;
	delete[] p;
}

Bon& Bon::operator=(Bon &b){
	Fiscal::operator=(b);
	this->sum = b.sum;
	this->nrp = b.nrp;
	p = new Produs[nrp];
	for (int i = 0; i < getNrp(); i++)
	{
		this->p[i] = b.p[i];
	}

	return *this;
}
