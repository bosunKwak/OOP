#include <iostream>
#include "Item.h"
#include "ManageCenter.h"
#include "Owner.h"
#include "InsertCoin.h"
using namespace std;

int Item::I_Num=10;
int Americano::I_Num = 10;
int Latte::I_Num = 10;
int Mocha::I_Num = 10;

// Americano Ŭ������ ����Լ� ���� 

void Americano::CheckItemNum() {

	if (Americano::getI_Num() < 8) {
		cout << "Americano�� ������ ���� ���� �����Դϴ�. " << endl;
		cout << "manage center�� ��ǰ�� ��û�ϰڽ��ϴ�." << endl;
		ManageCenter mc;
		mc.sendItem();
		cout << "��ǰ�� �޾ҽ��ϴ�." << endl;
		Americano::setI_Num(10);		
	}
}

void Americano::CheckStorage() {
	int b = VendingMachine::getBalance();
	Owner o;
	Americano::setI_Num(Americano::getI_Num() - 1);

	b -= cost;
	cout << "���� �ܾ��� " << b <<"�� �Դϴ�."<< endl;

	VendingMachine::setBalance(b);

	
	o.sendinfo();
}

// Latte Ŭ������ ����Լ� ���� 

void Latte::CheckItemNum() {
	int CurrentNum = Latte::getI_Num();

	if (CurrentNum < 8) {
		cout << "Latte�� ������ ���� ���� �����Դϴ�. " << endl;
		cout << "manage center�� ��ǰ�� ��û�ϰڽ��ϴ�." << endl;
		ManageCenter mc;
		mc.sendItem();
		cout << "��ǰ�� �޾ҽ��ϴ�." << endl;
		Latte::setI_Num(10);
	}
}
void Latte::CheckStorage() {
	int b = VendingMachine::getBalance();
	Owner o;
	Latte::setI_Num(Latte::getI_Num() - 1);

	b -= cost;
	cout << "���� �ܾ��� " << b << "�� �Դϴ�." << endl;

	VendingMachine::setBalance(b);

	o.sendinfo();
}


// Mocha Ŭ������ ����Լ� ���� 

void Mocha::CheckItemNum() {
	int CurrentNum = Mocha::getI_Num();

	if (CurrentNum < 8) {
		cout << "Mocha�� ������ ���� ���� �����Դϴ�. " << endl;
		cout << "manage center�� ��ǰ�� ��û�ϰڽ��ϴ�." << endl;
		ManageCenter mc;
		mc.sendItem();
		cout << "��ǰ�� �޾ҽ��ϴ�." << endl;
		Mocha::setI_Num(10);
	}
}
void Mocha::CheckStorage() {
	int b = VendingMachine::getBalance();
	Owner o;
	Mocha::setI_Num(Mocha::getI_Num() - 1);

	b -= cost;
	cout << "���� �ܾ��� " << b << "�� �Դϴ�." << endl;

	VendingMachine::setBalance(b);

	o.sendinfo();
}
