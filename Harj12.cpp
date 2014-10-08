
/***********************************************
*Harjoitus ?
*Tekijät?
*Kuvaus:
*Tee ohjelma, joka kysyy käyttäjältä kokonaisluvun väliltä 1-9 ja
*tulostaa vastauksen perusteella seuraavan kuvion (jos vastaus on 6):
*
*1
*22
*333
*4444
*55555
*666666
*
*Jokainen numero tulee tulostaa toistorakenten avulla erikseen lauseella:
*cout << rivinro;
*
*Versio: 1.2.3
*PVM: 8.10.-14
************************************************/

#include <iostream>
using namespace std;

void main(void)
{
	int x = 1;//x on rivinumero
	int a;// a on annettu numero
	int y;// y on loop:ia varten

	cout << "Anna luku 1-9" << endl;
	cin >> a;

	while (x <= a)
	{
		for (y = 1; y <= x; y++)
		{
			cout << x;
		}

		x = x + 1;
		cout << endl;
	}
}