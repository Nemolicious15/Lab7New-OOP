#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "bon.h"
#include "fiscal.h"
#include "Repo.h"
#include "Produs.h"
#include<iostream>
#include<string.h>
#include<tchar.h>
using namespace std;

template<class T>
class Controller{

private:
	Repo<T> r;
	
public:
	Controller(); //constr
	Controller(Repo<T> &r); //constr cu par
	Controller(const Controller<T> &c); //constr cpy
	~Controller(); //deconstr
	Controller<T>& operator=(const Controller<T> &c){ //operator atribuire
		this->r = c.r;
		return *this;
	}
	bool operator==(Controller<T> &c); //operator egal
	Repo<T> get_r(); //get r
	char* cauta(int ID); //cauta element
	void adauga_produs(int ID, int pret); //adauga produs
	void adauga_document(int ID);  //adauga document
	void adauga_bon(int ID, int sum, int nrp, Produs* p); //adauga bon
	char* afiseaza_produse(); //afiseaza prod
	char* afiseaza_documente(); //afiseaza documente
	char* afiseaza_bonuri(); //afiseaza bonuri

};

//CONSTR
template<class T>
Controller<T>::Controller(){
	//
}

//CONSTR CU PAR
template<class T>
Controller<T>::Controller(Repo<T> &r){
	this->r = r;
}

//CONSTR DE CPY
template<class T>
Controller<T>::Controller(const Controller<T> &c){
	this->r = c.r;
	
}

//DECONSTR
template<class T>
Controller<T>::~Controller(){
	
}

//OPERATOR ATRIBUIRE
//template<class T>
//Controller<T>& Controller::operator=(Controller<T> &c){
//	this->r = c.r;
//	return *this;
//}
//OPERATOR EGAL
template<class T>
bool Controller<T>::operator==(Controller<T> &c){
	if (r == c.r) return true;
	return false;
}

//GET R
template<class T>
Repo<T> Controller<T>::get_r(){
	return r;
}

//CAUTA ELEM
template<class T>
char* Controller<T>::cauta(int ID){
	char* c = new char[10];
	char* cx = new char[3];

	int x = 0;
	
	strcpy_s(c, 10, "Elemente:");
	for (int i = 0; i<r.getSize(); i++)
	if (r.getElem(i).getID() == ID) x++;
	_itoa_s(x, cx, 3, 10);
	strcat_s(c, 10, cx);
	strcat_s(c, 10, "El:");

	
	delete[] cx;
	return c;
}

//ADAUGA PRODUS
template<class T>
void Controller<T>::adauga_produs(int ID, int pret){
	Produs p(ID, pret);
	//r.addElem(p);
}

//ADAUGA DOCUMENT
template<class T>
void Controller<T>::adauga_document(int ID){
	Fiscal s(ID);
	r.addElem(s);
}

//ADAUGA BON
template<class T>
void Controller<T>::adauga_bon(int ID, int sum, int nrp, Produs* p){
	Bon b(ID, sum, nrp, p);
	r.addElem(b);
}

//AFISEAZA PRODUSE
template<class T>
char* Controller<T>::afiseaza_produse(){
	char* c = new char[10];
	char* cx = new char[3];
	/*strcpy(c, "Produse(id:pret): ");
	for (int i = 0; i<r.getNrp(); i++){
		itoa(r[i].getID(), cx, 10);
		strcat(c, cx);
		strcat(c, ":");
		itoa(r[i].getPret(), cx, 10);
		strcat(c, cx);
		strcat(c, " ; ");
	}*/

	return c;
}

//AFISEAZA DOCUMENTE
template<class T>
char* Controller<T>::afiseaza_documente(){
	char* c = new char[10];
	char* cx = new char[3];
	/*strcpy(c, "Documente(id): ");
	for (int i = 0; i<r.getNrp(); i++){
		itoa(r[i].getID(), cx, 10);
		strcat(c, cx);
		strcat(c, " ; ");
	}*/

	return c;
}
//AFISEAZA BONURI
template<class T>
char* Controller<T>::afiseaza_bonuri(){
	char* c = new char[10];
	char* cx = new char[3];
	/*strcpy(c, "Bonuri(idBon:suma,numar produse): ");
	for (int i = 0; i < r.getNrp(); i++){
		itoa(r[i].getID(), cx, 10);
		strcat(c, cx);
		strcat(c, ":");
		itoa(r[i].getSum(), cx, 10);
		strcat(c, cx);
		strcat(c, ",");
		itoa(r[i].getNrp(), cx, 10);
		strcat(c, cx);
		strcat(c, ";");
	}*/

	return c;
}


#endif