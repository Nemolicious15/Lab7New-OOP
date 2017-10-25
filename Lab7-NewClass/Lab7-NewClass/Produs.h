#ifndef Produs_H
#define Produs_H

#include <string.h>
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include "fiscal.h"
using namespace std;

class Produs{
private:
	int ID;
	int pret;

public:
	void setID(int i);
	int getID();
	void setPret(int t);
	int getPret();

	Produs(); //constr
	Produs(int i, int p); //constr par
	Produs(Produs &p); // constr cpy
	~Produs(); // deconstr
	Produs& operator=(Produs &p); //atribuire
	bool operator==(Produs &p); //egalitate
};

#endif