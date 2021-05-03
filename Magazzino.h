#pragma once
/*!
\file Magazzino.h
\brief dichiarazione classe Magazzino
\author Lorenzo
\version 1.0
\date 01/01/2000
*/

#include "Computer.h"
#include <string>
#include <iostream>
using namespace std;

/*!
\class Magazzino
\brief rappresenta l'insieme di computer
*/

class Magazzino
{
private:
	//! \var totale
	//! \brief totale costo
	int totale;
	//! \var pc
	//! \brief array di pc
	Computer* pc;

public:
	//! \brief costruttore predefinito
	Magazzino(void);

	/*!\fn aggiungi
		\brief aggiunge un pc
		\param[in] pc
		\param[in] codice
		return totale
	 */
	int aggiungi(Computer pc, int codice);

	/*!\fn elimina
		\brief elimina un pc
		\param[in] codice
		\return totale
	 */
	int elimina(int codice);

	/*!\fn ricercaCodice
		\brief ricerca tramite il codice
		\param[in] codice
	 */
	bool ricercaCodice(int codice);

	/*!\fn ricercaMiglioreVelocita
		\brief migliore velocita
	 */
	Computer ricercaMiglioreVelocita(void);

	/*!\fn ricercaMiglioreDimensione
		\brief migliore dimensione
	 */
	Computer ricercaMiglioreDimensione(void);

	/*!\fn ricercaMiglioreDisco
		\brief migliore disco
	 */
	Computer ricercaMiglioreDisco(void);

	/*!\fn stampa
		\brief stampa dei pc
	 */
	void stampa();

	/*!\fn getTotale
		\brief ritorna il totale dei pc
	 */
	int getTotale();


};



