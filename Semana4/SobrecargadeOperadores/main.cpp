#include <iostream>
#include "Numero.h"

using namespace std;

int main()
{

	Numero n1(5);
	Numero n2(6);
	Numero n3;

	cout << n1<<endl;
	cout << "Ingrese Numero 3: "<<endl;

	cin >> n2;

	cout << "Numero 2: " << n2 << endl;
		n3 = n1 + n2;

	cout << "Numero 3: " << n3;
	system("pause");
}