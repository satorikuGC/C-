#include<iostream>
#include"Sample.h"
using namespace std;

void SampleClass::Input() {
	a = 10;
	b = 3;

}

void SampleClass::Plus() {
	c = a + b;
}

void SampleClass::Disp() {
	cout << "��C���̒l��" << c << "\n";
}