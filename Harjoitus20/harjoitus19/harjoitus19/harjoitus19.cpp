/*Sami Liimatainen
IIO14S1
Harjoitus 20 // tiedostojen nimistä huolimatta
Versio 1.0
18.11.2014

Kuten harjoitus 19, mutta toteuta kayttaen taulukkoa ja osoitinta
tiedon käsittelyyn
*/


#include <iostream>
using namespace std;
int main()
{
	int nopeus[5] = { 0, 0, 0, 0, 0 };
	int *osoitin;

	osoitin = nopeus;
	//osoitin = &nopeus[0];

	int i = 0;
	while (true)
	{
		cout << "Anna nopeus: ";
		cin >> osoitin[i];

		if (osoitin[i] < 0)
		{
			cout << "Loppu" << endl;
			break;
		}

		cout << "Nopeutesi on " << (osoitin[0] + osoitin[1] + osoitin[2] + osoitin[3] + osoitin[4]) / 5 << endl;
		i++;

		if (i >= 5)
			i = 0;
	}
}