#include<iostream>
#include<string>
#include<assert.h>
#include "fiscal.h"
#include "testeFiscal.h"


using namespace std;


void testgetID(){
	Fiscal s(1);
	assert(s.getID() == 1);
	cout << "GetID functioneaza" << endl;
}

void testCopiere(){
	Fiscal s(1);
	Fiscal s2(s);

	//assert(s.getID() == s2.getID());
	cout << "Constructorul de copiere functioneaza" << endl;

}

// TESTE REPO
void testaddElem(){
	Repo<int> r1(10);
	r1.addElem(5);
	assert(r1.getElem(0) == 5);
	cout << "AddElem functioneaza" << endl;
}
void testaddElemDF(){
	Repo<Fiscal> r2(11);
	Fiscal s(5);
	r2.addElem(s);
	assert(r2.getElem(0) == s);
	cout << "AddElemDF functioneaza" << endl;
}

