#include <iostream>
#include "Calc.h"
using namespace std;

//main �Լ�
int main()
{
	adCalc test;
	double Re_test1, Re_test2;
	double lm_test1, lm_test2;
	cout << "���Ҽ�1 �Է�(�Ǽ�, ���) : ";
	cin >> Re_test1 >> lm_test1;
	cout << "���Ҽ�2 �Է�(�Ǽ�, ���) : ";
	cin >> Re_test2 >> lm_test2;
	test.add(Re_test1, lm_test1, Re_test2, lm_test2);
	test.subtract(Re_test1, lm_test1, Re_test2, lm_test2);
}