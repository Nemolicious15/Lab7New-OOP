
#include "fiscal.h"
#include "testeFiscal.h"
#include<iostream>
#include<conio.h>
#include "Input-Output.h"
#include "Repo.h"
#include "testeProdus.h"
#include "testeBon.h"
#include "bon.h"
#include "controller.h"
#include "UI.h"
using namespace std;


int main()
{
	
//	Repo<Produs> r1(5);
	Repo<Fiscal> r2(5);
	//Repo<Bon> r3(5);

	//Produs p1(1, 10);
	//Produs p2(2, 56);
	//Produs p3(3, 117);
	//
	//r1.addElem(p1);
	//
	//r1.addElem(p2);
	//
	//r1.addElem(p3);

	Fiscal s1(1);
	Fiscal s2(2);
	
	r2.addElem(s1);
	
	r2.addElem(s2);

	//Produs* prod = new Produs[3];
	//prod[0] = p1;
	//prod[1] = p2;
	//prod[2] = p3;
	//Bon b1(1, 183, 3, prod);
	//Bon b2(2, 183, 3, prod);
	//
	//r3.addElem(b1);
	//
	//r3.addElem(b2);

	
	Controller<Fiscal> c(r2);

	Menu<Fiscal> m(c);
	//m.menu_1();




	//testgetID();
	//Fiscal x[10];
	//int l = 0;
	//char* c = new char[10];

	//citiref(l, x,c); //citire vec obj din fisier
	//afisaref(l, x, c); // afisare vect obj in fisier

	//delete[] c;

	
	//testaddElem();
	//testaddElemDF(); //teste repo doc fiscal
	//testBaddElem();
	//testBaddElemDF(); // teste repo bon
	//testpaddElem();
	//testpaddElemDF(); // teste repo produs
	

	_getch();
	return 0;
}

