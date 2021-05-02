#include "pch.h"
#include "Computer.h"
#include "Magazzino.h"

#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int operazione = 0, count = 0;
    string marca, modello;
    int velocita, ram, disco, monitor, anno, codice;

    Computer pc;

    Magazzino gestione;

    do
    {
        do
        {
            cout << "\n\t\tScegli una voce del menu\':" << endl;
            cout << "**********************Menu\'****************************\n";
            cout << "*1) Aggiunta computer                                 *\n";
            cout << "*2) Rimuovi computer                                  *\n";
            cout << "*3) Ricerca tramite codice                            *\n";
            cout << "*4) Ricerca miglior computer                          *\n";
            cout << "*5) Stampa                                            *\n";
            cout << "*6) Esci la programma                                 *\n";
            cout << "*******************************************************\n";
            cin >> operazione;
        } while (operazione < 1 || operazione>6);
        switch (operazione)
        {
        case 1:
        {
            cout << "Inserisci la marca del pc" << endl;
            cin >> marca;
            cout << "Inserisci il modello del pc" << endl;
            cin >> modello;
            cout << "Inserisci la velocita processore del pc" << endl;
            cin >> velocita;
            cout << "Inserisci la dimensione della Ram del pc" << endl;
            cin >> ram;
            cout << "Inserisci la dimensione del disco del pc" << endl;
            cin >> disco;
            cout << "Inserisci la dimensione del monitor del pc" << endl;
            cin >> monitor;
            cout << "Inserisci l'anno di acquisto del pc" << endl;
            cin >> anno;

            pc = Computer(marca, modello, velocita, ram, disco, monitor, anno, count);

            gestione.aggiungi(pc, count);

            cout << "Il pc e\' stato registrato" << endl;
            count++;
            break;
        }

        case 2:
        {
            cout << "Inserisci il codice del pc da eliminare" << endl;
            cin >> codice;

            gestione.elimina(codice);

            cout << "Il pc e\' stato eliminato" << endl;

            break;
        }

        case 3:
        {
            cout << "Inserisci il codice del pc da ricercare" << endl;
            cin >> codice;

            gestione.ricercaCodice(codice);

            break;
        }

        case 4:
        {
            cout << "Il pc con maggiore velocita del processore" << endl;

            gestione.ricercaMiglioreVelocita();

            cout << "" << endl;
            cout << "Il pc con maggiore dimensione ram" << endl;

            gestione.ricercaMiglioreDimensione();

            cout << "" << endl;
            cout << "Il pc con maggiore dimensione del disco" << endl;

            gestione.ricercaMiglioreDisco();

            break;
        }
        case 5:
        {
            gestione.stampa();

            break;
        }

        case 6:
        {
            return 0;
            break;
        }
        }
    } while (operazione != 6);
    return 0;
}
