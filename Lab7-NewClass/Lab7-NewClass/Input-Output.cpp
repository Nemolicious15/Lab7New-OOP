
#include "fiscal.h"
#include "testeFiscal.h"
#include<iostream>
#include<conio.h>

#include<fstream>
using namespace std;

void citire(int &n, Fiscal v[]){


	n = 0;
	cout << "n= "; cin >> n;
	for (int i = 0; i < n; i++){
		int ID = 0;
		cout << "ID= "; cin >> ID;
		
		Fiscal f = Fiscal(ID);
		v[i] = f;
		
	}

}
void afisare(int n, Fiscal v[]){
	for (int i = 0; i < n; i++){
		cout << v[i].getID() << " ";
	}
}
void citiref(int &n, Fiscal v[], char* c){
	cout << "Introduceti numele fisierului datelor de intrare (cu tot cu extensie)= ";
	cin >> c;


	fstream fin(c, ios::in);
	fin >> n;
	int ID;

	for (int i = 0; i < n; i++){
		fin >> ID;
		
		Fiscal f = Fiscal(ID);
		v[i] = f;
		
	}

	fin.close();
}
void afisaref(int n, Fiscal v[], char* c){
	cout << "Introduceti numele fisierului pt afisare(cu tot cu extensie)= ";
	cin >> c;

	fstream fout(c, ios::out);

	for (int i = 0; i < n; i++){
		fout << v[i].getID() << " ";
	}
	fout.close();
}

