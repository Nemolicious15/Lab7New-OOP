
#ifndef FISCAL_H
#define FISCAL_H

#include <stdio.h>
#include <tchar.h>

#include<iostream>
#include<string>
using namespace std;
class Fiscal{

protected:
	int ID;

public:
	void setID(int nr);
	int getID();

	Fiscal(); //constr
	Fiscal(int p); //constr par
	
	Fiscal(Fiscal &s); //constr cpy

	~Fiscal(); // deconstr

	bool operator==(Fiscal &s);
	Fiscal& operator=(Fiscal &s);




};
#endif


