#include<iostream>
#include<string>
#include<assert.h>
#include "fiscal.h"
#include "testeBon.h"
#include "bon.h"
#include "Produs.h"
using namespace std;

void testBgetSum(){ //TEST GET SUM BON
	Produs* p;
	p = new Produs[2];
	p[0] = Produs(0, 1);
	p[1] = Produs(0, 2);
	Bon b(1, 1, 2, p);
	assert(b.getSum() == 1);
	cout << "getSum functioneaza" << endl;
}

void testBCopiere(){ //TEST CONSTR DE COPIERE BON
	Produs* p;
	p = new Produs[2];
	p[0] = Produs(0, 1);
	p[1] = Produs(0, 2);
	Bon b(1, 1, 2, p);
	Bon b1(b);
	assert(b.getSum() == b1.getSum());
	cout << "Constr de cpy bon merge";
}

//TESTE REPO
void testBaddElem(){ //TEST ADD ELEM DIN REPO
	Repo<int> r1(10);
	r1.addElem(5);
	assert(r1.getElem(0) == 5);
	cout << "AddElem B functioneaza" << endl;
}
void testBaddElemDF(){ //TEST ADD ELEM DIN FIRSIER REPO
	Repo<Fiscal> r2(11);
	Produs* p;
	p = new Produs[2];
	p[0] = Produs(0, 1);
	p[1] = Produs(0, 2);
	Bon b(1, 1, 2, p);
	r2.addElem(b);
	assert(r2.getElem(0) == b);
	cout << "AddElemDF  B functioneaza" << endl;
}
