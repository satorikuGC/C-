#include<iostream>
#include"Date.h"

void Date::SetValue(int a) {
	value = a;
}

void Date::Disp() {
	std::cout << "�����o�ϐ��̒l��" << value << "\n";
}