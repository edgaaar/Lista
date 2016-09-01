#include "Lista.h"

Lista::Lista()
{
	this->H=NULL;
	this->T=NULL;
}

Lista::Lista(int Dato)
{
	Nodo * aux= new Nodo(Dato);
	this->H=aux;
	this->T=aux;
	/*std::cout<<H->getDato()<<std::endl;
	std::cout<<H->getSig()<<std::endl;
	std::cout<<T->getDato()<<std::endl;
	std::cout<<T->getSig()<<std::endl;*/
}

bool Lista::ListaVacia()
{
	if (this->H == NULL && this->T == NULL)
		return true;
	return false;
}

void Lista::AddInicio(int Dato)
{
	Nodo* aux = new Nodo(Dato,this->H);
	if (ListaVacia())
	{
		this->T= aux;
	}
	this->H= aux;
/*	std::cout<<H->getDato()<<std::endl;
	std::cout<<H->getSig()<<std::endl;
	std::cout<<T->getDato()<<std::endl;
	std::cout<<T->getSig()<<std::endl;*/
}

void Lista::Show()
{
	Nodo* aux = this->H;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}

void Lista::AddFinal(int Dato)
{
	Nodo* aux = new Nodo(Dato);
	if(!ListaVacia())
	{
		T->setSig(aux);
		T = aux;
	}else{
		H = aux;
		T = aux;
	}
}

void Lista::AddRef(int Dato, int Ref)
{
	if(ListaVacia())
	{
		Nodo* aux = new Nodo(Dato);
		H = aux;
		T = H;
		std::cout<<"La lista estaba vacía, sin embargo se agregó el elemento"<<std::endl;
	}else{
		Nodo* aux = H;
		while(aux->getDato() != Ref || aux != NULL)
		{
			aux = aux->getSig();
			if(aux != NULL)
			{
				Nodo* aux2 = new Nodo(Dato,aux->getSig());
				aux->setSig(aux2);
			}else{
				std::cout<<"No existe la referencia en la lista"<<std::endl;
			}
		}

	}
}

int Lista::RemoveInicio(void)
{
	if(!ListaVacia())
	{
		int Dato = H->getDato();
		H = H->getSig();
		return Dato;
	}else{
		std::cout<<"La lista está vacía"<<std::endl;
		return (int)NULL;
	}	
}

int Lista::RemoveFinal(void)
{
	if(!ListaVacia())
	{
		int Dato = T->getDato();
		if(H!=T)
		{
			Nodo* aux = H;
			while(aux->getSig()!=T)
			{
				aux = aux->getSig();
				T = aux;
				T->setSig(NULL);
			}
		}else{
				H = NULL;
				T = NULL;
		}
		return Dato;
	}else{
		std::cout<<"La lista está vacía"<<std::endl;
		return (int)NULL;
	}	
}

int Lista::RemoveRef(int Ref)
{
	if(!ListaVacia())
	{
		if(H!=T)
		{
			Nodo* aux = H;
			Nodo* aux2 = NULL; 
			while(aux->getDato()!= Ref || aux != NULL)
			{
				aux2 = aux;
				aux = aux->getSig();
			}
			//AQUÍ ME QUEDÉ
		}else{
				H = NULL;
				T = NULL;
		}
		return Ref;
	}else{
		std::cout<<"La lista está vacía"<<std::endl;
		return (int)NULL;
	}
}