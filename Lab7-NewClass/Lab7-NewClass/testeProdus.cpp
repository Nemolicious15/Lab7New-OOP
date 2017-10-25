#include<iostream>
#include<string>
#include<assert.h>
#include "Produs.h"
#include "testeProdus.h"


using namespace std;


void testpgetID(){
	Produs p(1,1);
	assert(p.getID() == 1);
	cout << "GetID P functioneaza" << endl;
}

void testpCopiere(){
	Produs p(1,1);
	Produs p2(p);

	//assert(s.getID() == s2.getID());
	cout << "Constructorul de P copiere functioneaza" << endl;

}

// TESTE REPO
void testpaddElem(){
	Repo<int> r1(10);
	r1.addElem(5);
	assert(r1.getElem(0) == 5);
	cout << "AddElem P functioneaza" << endl;
}
void testpaddElemDF(){
	Repo<Produs> r2(11);
	Produs p(5,1);
	r2.addElem(p);
	assert(r2.getElem(0) == p);
	cout << "AddElemDF P functioneaza" << endl;
}

