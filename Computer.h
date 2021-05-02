#pragma once
/*!
\file Computer.h
\brief dichiarazione classe Computer
\author Lorenzo
\version 1.0
\date 01/01/2000
*/

#include <iostream>
#include <cstdio>
#include <cstring>

/*!
\class Computer
\brief rappresenta il singolo computer
*/

class Computer
{
private:
	//! \var modello
	//! \brief modello del pc
	std::string modello;
	//! \var marca
	//! \brief marca del pc
	std::string marca;
	//! \var velocita
	//! \brief velocita del pc
	int velocita;
	//! \var ram
	//! \brief ram del pc
	int ram;
	//! \var disco
	//! \brief disco del pc
	int disco;
	//! \var monitor
	//! \brief monitor del pc
	int monitor;
	//! \var anno
	//! \brief anno del pc
	int anno;
	//! \var codice
	//! \brief codice del pc
	int codice;

public:
	//! \brief costruttore predefinito
	Computer(void);
	/*!\fn Computer
	   \brief costruttore
	   \param[in] marca
	   \param[in] modello
	   \param[in] velocita
	   \param[in] ram
	   \param[in] disco
	   \param[in] monitor
	   \param[in] anno
	   \param[in] codice
	*/
	Computer(std::string marca, std::string modello, int velocita, int ram, int disco, int monitor, int anno, int codice);
	/*!\fn getMarca
	   \brief ritorno marca
	   \return marca
	*/
	std::string getMarca(void);
	/*!\fn getModello
	   \brief ritorno modello
	   \return modello
	*/
	std::string getModello(void);
	/*!\fn getVelocita
	   \brief ritorno velocita
	   \return velocita
	*/
	int getVelocita(void);
	/*!\fn getRam
	   \brief ritorno ram
	   \return ram
	*/
	int getRam(void);
	/*!\fn getDisco
	   \brief ritorno disco
	   \return disco
	*/
	int getDisco(void);
	/*!\fn getMonitor
	   \brief ritorno monitor
	   \return monitor
	*/
	int getMonitor(void);
	/*!\fn getAnno
	   \brief ritorno anno
	   \return anno
	*/
	int getAnno(void);
	/*!\fn getCodice
	   \brief ritorno codice
	   \return codice
	*/
	int getCodice(void);
};

