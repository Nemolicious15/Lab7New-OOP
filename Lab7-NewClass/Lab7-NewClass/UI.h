#ifndef MENU_H
#define MENU_H
#include "controller.h"
using namespace std;

template<class T>
class Menu{

private:
	Controller<T> cont;
public:
	Menu(); //constr 
	Menu(Controller<T> &c); //constr par
	Menu(Menu& m); //constr cpy
	~Menu(); //deconstr
	Menu<T>& operator=(Menu<T> &m); //operator atribuire
	bool operator==(Menu<T> &m); //operator egal
	void menu_1(); //meniu 1
	void menu_2(); //meniu 2
	void menu_3(); //meniu 3

};


//CONSTR 
template<class T>
Menu<T>::Menu(){
	
}
//CONSTR PAR
template<class T>
Menu<T>::Menu(Controller<T> &c){
	this->cont = c;
	menu_1();
}

//CONSTR CPY
template<class T>
Menu<T>::Menu(Menu& m){
	this->cont = m.cont;
	menu_1();
}

//DECONSTR
template<class T>
Menu<T>::~Menu(){
	//
}

//OPERATOR ATRIBUIRE
template<class T>
Menu<T>& Menu<T>::operator=(Menu<T> &m){
	this->cont = m.cont;
	return *this;
}

//OPERATOR EGAL
template<class T>
bool Menu<T>::operator==(Menu<T> &m){
	if (cont == m.cont) return true;
	return false;
}
//MENIU 1
template<class T>
void Menu<T>::menu_1(){
	int x = 0;
	while (true){
		cout << endl << "1:Adauga Entitati" << endl << "2:Afiseaza Entitati" << endl << "3:Cauta Entitati" << endl << "0:InchIDe" << endl << "Alege un numar (0-3): ";
		cin >> x;
		cout << endl;
		if (x == 1) menu_2();
		if (x == 2) menu_3();
		if (x == 3){
			int ID = 0;
			cout << "Introduceti ID-ul pe care doriti sa il cautati: ";
			cin >> ID;
			cout << endl;
			cout << cont.cauta(ID) << endl;
		}
		if (x == 0) return;
		if (x<0 || x>3) cout << "Numar invalid!" << endl;

	}
}
//MENIU 2
template<class T>
void Menu<T>::menu_2(){
	cout << endl << "1:Adauga Produs" << endl << "2:Adauga Document" << endl << "3:Adauga Bon" << endl << "0:Inapoi" << endl << "Alege un numar(0-3): ";
	int x = 0;
	cin >> x;
	cout << endl;
	if (x == 1){
		int ID = 0;
		int pret = 0;
		cout << "Introduceti ID-ul Produsului: ";
		cin >> ID;
		cout << endl;
		cout << "Introduceti pretul Produsului: ";
		cin >> pret;
		cout << endl;
		cont.adauga_produs(ID, pret);
	}
	if (x == 2){
		int ID = 0;
		cout << "Introduceti ID-ul Documentului: ";
		cin >> ID;
		cout << endl;
		cont.adauga_document(ID);
	}
	if (x == 3){
		int ID = 0;
		int suma = 0;
		int nrp = 0;
		Produs* prod = new Produs[10];
		int aux = 0;
		cout << "Introduceti ID-ul Bonului: ";
		cin >> ID;
		cout << endl;
		cout << "Introduceti numarul de produse al Bonului: ";
		cin >> nrp;
		cout << endl;
		for (int i = 0; i<nrp; i++){
			int ID = 0;
			int pret = 0;
			cout << "Introduceti ID-ul Produsului: ";
			cin >> ID;
			cout << endl;
			cout << "Introduceti pretul Produsului: ";
			cin >> pret;
			cout << endl;
			suma += pret;
			Produs p(ID, pret);
			prod[i] = p;
		}
		cont.adauga_bon(ID, suma, nrp, prod);
	}
	if (x == 0) menu_1();
	if (x<0 || x>3) cout << "Numar invalid!" << endl;
}
//MENIU 3
template<class T>
void Menu<T>::menu_3(){
	cout << endl << "1:Afiseaza Produse" << endl << "2:Afiseaza Documente" << endl << "3:Afiseaza Bonuri" << endl << "0:Inapoi" << endl << "Alege un numar(0-3): ";
	int x = 0;
	cin >> x;
	cout << endl;
	if (x == 1) cout << cont.afiseaza_produse() << endl;
	if (x == 2) cout << cont.afiseaza_documente() << endl;
	if (x == 3) cout << cont.afiseaza_bonuri() << endl;
	if (x == 0) menu_1();
	if (x<0 || x>3) cout << "Numar invalid!" << endl;
}

#endif 
