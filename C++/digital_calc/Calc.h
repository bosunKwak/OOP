#pragma once
#include <iostream>
using namespace std;

class simpleCalc {
protected:
	int a,b,c;	

	//�̸� : "add"
	//����/��� : int�� ���� �ΰ��� ���� ���Ѵ�. 
	//���� : int num1, int num2
	//���� : int c
	int add(int num1, int num2);

	//�̸� : "subtract"
	//����/��� : int�� ���� �ΰ��� ���� ����.
	//���� : int num1, int num2
	//���� : int c
	int subtract(int num1, int num2);
};

class adCalc :public simpleCalc {
private:
	double Re;	// "Re" : double�� ������ ���Ҽ����� �Ǽ��κ��� ���� �����Ѵ�.
	double lm;	// "Im" : double�� ������ ���Ҽ����� ��� �κ��� ���� �����Ѵ�. 

public:

	//�̸� : "add"
	//����/��� : �Ǽ��� �Ǽ�����, ����� ������� ���Ѵ�. 
	//���� : double num1_re, double num1_lm, double num2_re, double num2_lm
	//���� : ����
	void add(double num1_re, double num1_lm, double num2_re, double num2_lm);

	//�̸� : "subtract"
	//����/��� : �Ǽ��� �Ǽ�����, ����� ������� ����.
	//���� : double num1_re, double num1_lm, double num2_re, double num2_lm
	//���� : ����
	void subtract(double num1_re, double num1_lm, double num2_re, double num2_lm);
};