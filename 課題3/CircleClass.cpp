#include<iostream>
#include"CircleClass.h"

using namespace std;
void CircleClass::Input() {
	cout << "”¼Œa‚Í";
	cin >> r;

}

void CircleClass::Calc() {
	area = r * r * 3.14f;
}

void CircleClass::Disp() {
	cout << "‰~‚Ì–ÊÏ" << area << "\n";
}