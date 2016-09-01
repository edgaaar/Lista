#include <iostream>

class Nodo
{
private:
	int Dato;
	Nodo* Sig;
public:
	Nodo(int Dato, Nodo* Sig);
	Nodo(int Dato);
	void setDato(int Dato);
	void setSig(Nodo* Sig);
	int getDato();
	Nodo* getSig();
	//~Nodo();
};