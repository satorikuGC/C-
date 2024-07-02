#include "sub.h"
//SampleClass クラスのポインタを用意
SampleClass* a;
//メイン関数
int main()
{
	//クラスのインスタンス（実態）を作る
	sub a;
	//３つのメンバ関数を呼び出す
	a.Input();
	a.Minus();
	a.Disp();
	
}