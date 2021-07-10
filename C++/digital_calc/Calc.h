#pragma once
#include <iostream>
using namespace std;

class simpleCalc {
protected:
	int a,b,c;	

	//이름 : "add"
	//목적/기능 : int형 변수 두개의 값을 더한다. 
	//인자 : int num1, int num2
	//리턴 : int c
	int add(int num1, int num2);

	//이름 : "subtract"
	//목적/기능 : int형 변수 두개의 값을 뺀다.
	//인자 : int num1, int num2
	//리턴 : int c
	int subtract(int num1, int num2);
};

class adCalc :public simpleCalc {
private:
	double Re;	// "Re" : double형 변수로 복소수에서 실수부분의 값을 저장한다.
	double lm;	// "Im" : double형 변수로 복소수에서 허수 부분의 값을 저장한다. 

public:

	//이름 : "add"
	//목적/기능 : 실수는 실수끼리, 허수는 허수끼리 더한다. 
	//인자 : double num1_re, double num1_lm, double num2_re, double num2_lm
	//리턴 : 없음
	void add(double num1_re, double num1_lm, double num2_re, double num2_lm);

	//이름 : "subtract"
	//목적/기능 : 실수는 실수끼리, 허수는 허수끼리 뺀다.
	//인자 : double num1_re, double num1_lm, double num2_re, double num2_lm
	//리턴 : 없음
	void subtract(double num1_re, double num1_lm, double num2_re, double num2_lm);
};