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


