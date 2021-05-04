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

//test della funzione aggiungi pc della classe Magazzino(con parametri giusti)
TEST(Magazzino, aggiungi_pc_parametri_giusti)
{
    Magazzino m;
    Computer c1("Asus", "VivoBook", 2, 8, 400, 50, 2016, 1);
    Computer c2("Asus", "VivoBook", 3, 16, 1000, 60, 2019, 2);

    ASSERT_TRUE(m.aggiungi(c1, 1));
    ASSERT_TRUE(m.aggiungi(c2, 2));

    ASSERT_TRUE(c1.getMarca() == "Asus");
    ASSERT_TRUE(c1.getModello() == "VivoBook");
    ASSERT_TRUE(c1.getVelocita() == 2);
    ASSERT_TRUE(c1.getRam() == 8);
    ASSERT_TRUE(c1.getDisco() == 400);
    ASSERT_TRUE(c1.getMonitor() == 50);
    ASSERT_TRUE(c1.getAnno() == 2016);
    ASSERT_TRUE(c1.getCodice() == 1);

    ASSERT_TRUE(c2.getMarca() == "Asus");
    ASSERT_TRUE(c2.getModello() == "VivoBook");
    ASSERT_TRUE(c2.getVelocita() == 3);
    ASSERT_TRUE(c2.getRam() == 16);
    ASSERT_TRUE(c2.getDisco() == 1000);
    ASSERT_TRUE(c2.getMonitor() == 60);
    ASSERT_TRUE(c2.getAnno() == 2019);
    ASSERT_TRUE(c2.getCodice() == 2);
}

//test della funzione aggiungi pc della classe Magazzino(con parametri sbagliati)
TEST(Magazzino, aggiungi_pc_parametri_sbagliati)
{
    Magazzino m;
    Computer c1("Asus", "VivoBook", 2, 8, 400, 50, 2016, 1);
    Computer c2("Asus", "VivoBook", 3, 16, 1000, 60, 2019, 2);

    ASSERT_TRUE(m.aggiungi(c1, 1));
    ASSERT_TRUE(m.aggiungi(c2, 2));

    ASSERT_FALSE(c1.getMarca() == "bo");
    ASSERT_FALSE(c1.getModello() == "bo");
    ASSERT_FALSE(c1.getVelocita() == 10);
    ASSERT_FALSE(c1.getRam() == 10);
    ASSERT_FALSE(c1.getDisco() == 10);
    ASSERT_FALSE(c1.getMonitor() == 10);
    ASSERT_FALSE(c1.getAnno() == 10);
    ASSERT_FALSE(c1.getCodice() == 10);

    ASSERT_FALSE(c2.getMarca() == "bo");
    ASSERT_FALSE(c2.getModello() == "bo");
    ASSERT_FALSE(c2.getVelocita() == 10);
    ASSERT_FALSE(c2.getRam() == 10);
    ASSERT_FALSE(c2.getDisco() == 10);
    ASSERT_FALSE(c2.getMonitor() == 10);
    ASSERT_FALSE(c2.getAnno() == 10);
    ASSERT_FALSE(c2.getCodice() == 10);
}

//test della funzione elimina pc della classe Magazzino
TEST(Magazzino, elimina_pc)
{
    Magazzino m;

    Computer c1("Asus", "VivoBook", 2, 8, 400, 50, 2016, 1);
    Computer c2("Asus", "VivoBook", 3, 16, 1000, 60, 2019, 2);

    ASSERT_TRUE(m.aggiungi(c1, 1));
    ASSERT_TRUE(m.aggiungi(c2, 2));

    ASSERT_TRUE(m.elimina(1));
    ASSERT_TRUE(m.elimina(2));

    ASSERT_FALSE(m.elimina(5));
}
