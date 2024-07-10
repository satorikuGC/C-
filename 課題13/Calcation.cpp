#include<iostream>
#include"Calcation.h"

void Calclation::SetA(float a) {

	Avalue = a;

}

void Calclation::SetB(float b) {

	Bvalue = b;

}

void Calclation::Disp() {


	std::cout << Avalue << "+" << Bvalue << "=" << Avalue + Bvalue << "\n";
	std::cout << Avalue << "-" << Bvalue << "=" << Avalue - Bvalue << "\n";
}