#include<iostream>
#include"Date.h"

void Date::SetValue(int a) {
	value = a;
}

void Date::Disp() {
	std::cout << "メンバ変数の値は" << value << "\n";
}