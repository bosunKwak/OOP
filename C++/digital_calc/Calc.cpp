#include <iostream>
#include "Calc.h"

//simpleCalc 의 멤버함수를 정의한다. 
int simpleCalc::add(int num1, int num2) {
	a = num1;
	b = num2;
	c = a + b;
	return c;
}

int simpleCalc::subtract(int num1,int num2)
{
	a = num1;
	b = num2;
	int c = a - b;
	return c;
}

//adCalc의 멤버함수를 정의한다.
void adCalc::add(double num1_re, double num1_lm, double num2_re, double num2_lm) {
	Re = num1_re + num2_re;
	lm = num1_lm + num2_lm;
	cout << "복소수의 덧셈 : " << Re << " + " << lm << "j\n";
}
void adCalc::subtract(double num1_re, double num1_lm, double num2_re, double num2_lm)
{
	Re = num1_re - num2_re;
	lm = num1_lm - num2_lm;
	cout << "복소수의 뺄셈 : " << Re << " + " << lm << "j\n";
}