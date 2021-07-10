#include <iostream>
#include "Calc.h"
using namespace std;

//main 함수
int main()
{
	adCalc test;
	double Re_test1, Re_test2;
	double lm_test1, lm_test2;
	cout << "복소수1 입력(실수, 허수) : ";
	cin >> Re_test1 >> lm_test1;
	cout << "복소수2 입력(실수, 허수) : ";
	cin >> Re_test2 >> lm_test2;
	test.add(Re_test1, lm_test1, Re_test2, lm_test2);
	test.subtract(Re_test1, lm_test1, Re_test2, lm_test2);
}