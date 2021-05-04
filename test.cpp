/*!
\file test.cpp
\brief implementazione dei test
\author Lorenzo
\version 1.0
\date 01/01/2000
*/
#include "pch.h"
#include "Computer.h"
#include "Magazzino.h"

#include "gtest/gtest.h"

class Test_programma_computer : public testing::Test
{
	public:
		Computer* c, * c1, * c2;
		Magazzino* m;

	virtual void SetUp()
	{
		c = new Computer();
		c1 = new Computer("Asus", "VivoBook", 2, 8, 400, 50, 2016, 1);
		c2 = new Computer("Asus", "VivoBook", 3, 16, 1000, 60, 2019, 2);
		m = new Magazzino();
	}

	virtual void TearDown()
	{
		delete c;
		delete c1;
		delete c2;
		delete m;
	}
};
    
//test del costruttore con parametri da input della classe Computer(parametri giusti)
TEST(Computer, costruttore_con_parametri_giusti) 
{
    Computer c1("Asus", "VivoBook", 2, 8, 400, 50, 2016, 1);
    ASSERT_TRUE(c1.getMarca() == "Asus");
    ASSERT_TRUE(c1.getModello() == "VivoBook");
    ASSERT_TRUE(c1.getVelocita() == 2);
    ASSERT_TRUE(c1.getRam() == 8);
    ASSERT_TRUE(c1.getDisco() == 400);
    ASSERT_TRUE(c1.getMonitor() == 50);
    ASSERT_TRUE(c1.getAnno() == 2016);
    ASSERT_TRUE(c1.getCodice() == 1);
}


//test del costruttore con parametri da input della classe Computer(parametri sbagliati)
TEST(Computer, costruttore_con_parametri_sbagliati)
{
    Computer c1("Asus", "VivoBook", 2, 8, 400, 50, 2016, 1);

    ASSERT_FALSE(c1.getMarca() == "bo");
    ASSERT_FALSE(c1.getModello() == "bo");
    ASSERT_FALSE(c1.getVelocita() == 10);
    ASSERT_FALSE(c1.getRam() == 10);
    ASSERT_FALSE(c1.getDisco() == 10);
    ASSERT_FALSE(c1.getMonitor() == 10);
    ASSERT_FALSE(c1.getAnno() == 10);
    ASSERT_FALSE(c1.getCodice() == 10);
}
 
//test della funzione ricerca pc della classe Magazzino
TEST(Magazzino, ricerca_pc)
{
    Magazzino m;

    Computer c1("Asus", "VivoBook", 2, 8, 400, 50, 2016, 1);
    Computer c2("Asus", "VivoBook", 3, 16, 1000, 60, 2019, 2);

    ASSERT_TRUE(m.aggiungi(c1, 1));
    ASSERT_TRUE(m.aggiungi(c2, 2));

    ASSERT_TRUE(m.ricercaCodice(1));

    ASSERT_FALSE(m.ricercaCodice(5));
    ASSERT_FALSE(m.ricercaCodice(9));
}
 







//test del costruttore della classe Computer(parametri giusti)
TEST(Computer, costruttore_senza_parametri_giusti)
{
    Computer c;

    ASSERT_TRUE(c.getMarca() == "");
    ASSERT_TRUE(c.getModello() == "");
    ASSERT_TRUE(c.getVelocita() == 0);
    ASSERT_TRUE(c.getRam() == 0);
    ASSERT_TRUE(c.getDisco() == 0);
    ASSERT_TRUE(c.getMonitor() == 0);
    ASSERT_TRUE(c.getAnno() == 0);
    ASSERT_TRUE(c.getCodice() == 0);
}

//test del costruttore della classe Computer(parametri sbagliati)
TEST(Computer, costruttore_senza_parametri_sbagliati)
{
    Computer c;

    ASSERT_FALSE(c.getMarca() == "bo");
    ASSERT_FALSE(c.getModello() == "bo");
    ASSERT_FALSE(c.getVelocita() == 10);
    ASSERT_FALSE(c.getRam() == 10);
    ASSERT_FALSE(c.getDisco() == 10);
    ASSERT_FALSE(c.getMonitor() == 10);
    ASSERT_FALSE(c.getAnno() == 10);
    ASSERT_FALSE(c.getCodice() == 10);
}

//test costruttore della classe Magazzino 
TEST(Magazzino, costruttore_senza_parametri)
{
    Magazzino m;
    ASSERT_TRUE(m.getTotale() == 0);

    ASSERT_FALSE(m.getTotale() == 10);
}





