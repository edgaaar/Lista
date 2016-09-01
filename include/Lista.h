#include "Nodo.h"

class Lista
{
public:
	Nodo* H;
	Nodo* T;	
	Lista();
	Lista(int Dato);
	bool ListaVacia();
	void AddInicio(int Dato);
	void AddFinal(int Dato);
	void AddRef(int Dato, int Ref);
	int RemoveInicio();
	int RemoveFinal();
	int RemoveRef(int Ref);
	//int VaciarLista();
	//Nodo* BuscarElemento();
	void Show();
};