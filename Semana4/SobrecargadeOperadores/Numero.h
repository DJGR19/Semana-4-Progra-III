#pragma once
#ifndef NUMERO_H
#define NUMERO_H
#include <iostream>
class Numero
{
	friend std::ostream &operator<< (std::ostream &, const Numero &);
	friend std::istream &operator>> (std::istream &, Numero &);
	friend Numero operator+ (const Numero &, const Numero &);


private:
	double num;
	
public:

	Numero();
	Numero(double);
	void setNumero(double);
	double getNumero();

};



#endif // !NUMERO_H
