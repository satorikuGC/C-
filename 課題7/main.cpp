#include "Sample.h"
void Function();
#include<iostream>

int main()
{
	std::cout << "プログラム開始\n";
	Function();
	std::cout << "";
}

void Fubction() {
	std::cout << "関数が呼び出されました\n";
		Sample instSample;

		instSample.menberFunc();
}