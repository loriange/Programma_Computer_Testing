/*!
\file Computer.cpp
\brief implementazione classe Computer
\author Lorenzo
\version 1.0
\date 01/01/2000
*/
#include "pch.h"
#include "Computer.h"

Computer::Computer()
{
	velocita = 0;
	marca = "";
	ram = 0;
	disco = 0;
	monitor = 0;
	anno = 0;
	codice = 0;
	modello = "";
}

Computer::Computer(std::string marca, std::string modello, int velocita, int ram, int disco, int monitor, int anno, int codice)
{
	this->marca = marca;
	this->modello = modello;
	this->velocita = velocita;
	this->ram = ram;
	this->disco = disco;
	this->monitor = monitor;
	this->anno = anno;
	this->codice = codice;
}

int Computer::getVelocita()
{
	return velocita;
}

int Computer::getRam()
{
	return ram;
}

int Computer::getDisco()
{
	return disco;
}

int Computer::getMonitor()
{
	return monitor;
}

int Computer::getAnno()
{
	return anno;
}

std::string Computer::getMarca()
{
	return marca;
}

std::string Computer::getModello()
{
	return modello;
}

int Computer::getCodice()
{
	return codice;
}
