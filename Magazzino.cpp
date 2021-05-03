#include "pch.h"
#include "Magazzino.h"


Magazzino::Magazzino()
{
	totale = 0;
	pc = new Computer[100];
}

int Magazzino::aggiungi(Computer comp, int codice)
{
	pc[codice] = comp;
	totale++;
	return totale;
}

void Magazzino::stampa()
{
	for (int i = 0, z = 1; i < totale; i++, z++)
	{
		cout << "Computer n " << z << endl;
		cout << "Il codice: " << pc[i].getCodice() << endl;
		printf("La marca: %s\n", pc[i].getMarca().c_str());
		printf("Il modello: %s\n", pc[i].getModello().c_str());
		cout << "Velocita\' processore: " << pc[i].getVelocita() << endl;
		cout << "Ram: " << pc[i].getRam() << endl;
		cout << "Disco: " << pc[i].getDisco() << endl;
		cout << "Monitor: " << pc[i].getMonitor() << endl;
		cout << "L'anno: " << pc[i].getAnno() << endl;
		cout << "" << endl;
	}
}

int Magazzino::elimina(int cod)
{
	for (int i = cod; i < totale - 1; i++)
	{
		pc[i] = pc[i + 1];
	}
	return totale--;
}

bool Magazzino::ricercaCodice(int codice)
{
	bool flag = false;

	for (int i = 0; i < totale; i++)
	{
		if (pc[i].getCodice() == codice)
		{
			/*cout << "Il computer e\' presente e le sue caratteristiche sono: " << endl;
			cout << "Il codice: " << pc[i].getCodice() << endl;
			printf("La marca: %s\n", pc[i].getMarca().c_str());
			printf("Il modello: %s\n", pc[i].getModello().c_str());
			cout << "Velocita\' processore: " << pc[i].getVelocita() << endl;
			cout << "Ram: " << pc[i].getRam() << endl;
			cout << "Disco: " << pc[i].getDisco() << endl;
			cout << "Monitor: " << pc[i].getMonitor() << endl;
			cout << "L'anno: " << pc[i].getAnno() << endl;*/
			flag = true;
			return true;
		}
	}

	if (flag == false)
	{
		//cout << "Il computer con quel codice non e\' presente" << endl;
		return false;
	}
}

Computer Magazzino::ricercaMiglioreVelocita()
{
	int max = 0, var = 0;
	for (int i = 0; i < totale; i++)
	{
		if (pc[i].getVelocita() > max)
		{
			max = pc[i].getVelocita();
			var = i;
		}
	}
	return pc[var];
}

Computer Magazzino::ricercaMiglioreDimensione()
{
	int max = 0, var = 0;
	for (int i = 0; i < totale; i++)
	{
		if (pc[i].getRam() > max)
		{
			max = pc[i].getRam();
			var = i;
		}
	}
	return pc[var];
}

Computer Magazzino::ricercaMiglioreDisco()
{
	int max = 0, var = 0;
	for (int i = 0; i < totale; i++)
	{
		if (pc[i].getDisco() > max)
		{
			max = pc[i].getDisco();
			var = i;
		}
	}
	return pc[var];
}

int Magazzino::getTotale()
{
	return totale;
}
