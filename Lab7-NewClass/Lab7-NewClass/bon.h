#ifndef BON_H
#define BON_H

#include <string.h>
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include "fiscal.h"
#include "Produs.h"
using namespace std;

class Bon : public Fiscal{
private:
	int sum;
	int nrp;
	Produs* p;

public:
	void setSum(int s);
	int getSum();
	void setNrp(int nr);
	int getNrp();
	void setProdus(Produs* p11);
	Produs* getProdus();

	Bon(); //co;nstr
	Bon(int i, int s,int nr, Produs* p); //constr par
	Bon(Bon &b); // constr cpy
	~Bon(); // deconstr
	Bon& operator=(Bon &b); //atribuire
};

#endif