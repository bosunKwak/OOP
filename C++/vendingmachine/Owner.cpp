#include <iostream>
#include "Owner.h"
#include "Item.h"
using namespace std;

//Owner�� ����Լ� ����
void Owner::sendinfo() {
	cout << "<=======================Owner=======================>" << endl;
	cout << "|   vending machine�� current storage ������ ����   |" << endl;
	cout << "|   <�޽��� ����>                                   |" << endl;
	cout << "|     Americano: " << Americano::getI_Num() << "�� �ֽ��ϴ�.                      |" << endl;
	cout << "|     Latte: " << Latte::getI_Num() << "�� �ֽ��ϴ�.                         | " << endl;
	cout << "|     Mocha: " << Mocha::getI_Num() << "�� �ֽ��ϴ�.                         | " << endl;
	cout << "<===================================================>" << endl;
}