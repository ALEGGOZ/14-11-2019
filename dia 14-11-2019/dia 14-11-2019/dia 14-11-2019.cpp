#include <string>
#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "1.-pedro Estrada" << endl << "2.-karla Garcia" << endl << "3.-Perla Sanchez" << endl <<
		"4.-Antonio Perez" << endl << "5.-Ana Valdez" << endl << "De quien deseas saber: ";
	cin >> num;
	switch (num)
	{
	case 1: 
		cout << "grupo: 3-A" << endl << "correo: pedro@ucol.mx";
		return 0;
		break;
	case 2:
		cout << "grupo: 3-C" << endl << "correo: garciakarla@ucol.mx";
		return 0;
		break;
	case 3:
		cout << "grupo: 3-D" << endl << "correo: sanchezp@ucol.mx";
		return 0;
		break;
	case 4:
		cout << "grupo: 3-B" << endl << "correo: perezantonio@ucol.mx";
		return 0;
		break;
	case 5:
		cout << "grupo: 3-A" << endl << "correo: valdezaa@ucol.mx";
		return 0;
		break;
	default: cout << "valor no valido";
		return 0;
		break;
	}
}

