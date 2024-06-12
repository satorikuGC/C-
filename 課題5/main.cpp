#include<iostream>
#include"Date.h"

int main() {
	int i;
	std::cin >> i;

	Date x;

	x.SetValue(i);
	x.Disp();

}