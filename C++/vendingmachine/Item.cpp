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

// Americano 클래스의 멤버함수 정의 

void Americano::CheckItemNum() {

	if (Americano::getI_Num() < 8) {
		cout << "Americano의 개수가 일정 개수 이하입니다. " << endl;
		cout << "manage center에 상품을 요청하겠습니다." << endl;
		ManageCenter mc;
		mc.sendItem();
		cout << "상품을 받았습니다." << endl;
		Americano::setI_Num(10);		
	}
}

void Americano::CheckStorage() {
	int b = VendingMachine::getBalance();
	Owner o;
	Americano::setI_Num(Americano::getI_Num() - 1);

	b -= cost;
	cout << "현재 잔액은 " << b <<"원 입니다."<< endl;

	VendingMachine::setBalance(b);

	
	o.sendinfo();
}

// Latte 클래스의 멤버함수 정의 

void Latte::CheckItemNum() {
	int CurrentNum = Latte::getI_Num();

	if (CurrentNum < 8) {
		cout << "Latte의 개수가 일정 개수 이하입니다. " << endl;
		cout << "manage center에 상품을 요청하겠습니다." << endl;
		ManageCenter mc;
		mc.sendItem();
		cout << "상품을 받았습니다." << endl;
		Latte::setI_Num(10);
	}
}
void Latte::CheckStorage() {
	int b = VendingMachine::getBalance();
	Owner o;
	Latte::setI_Num(Latte::getI_Num() - 1);

	b -= cost;
	cout << "현재 잔액은 " << b << "원 입니다." << endl;

	VendingMachine::setBalance(b);

	o.sendinfo();
}


// Mocha 클래스의 멤버함수 정의 

void Mocha::CheckItemNum() {
	int CurrentNum = Mocha::getI_Num();

	if (CurrentNum < 8) {
		cout << "Mocha의 개수가 일정 개수 이하입니다. " << endl;
		cout << "manage center에 상품을 요청하겠습니다." << endl;
		ManageCenter mc;
		mc.sendItem();
		cout << "상품을 받았습니다." << endl;
		Mocha::setI_Num(10);
	}
}
void Mocha::CheckStorage() {
	int b = VendingMachine::getBalance();
	Owner o;
	Mocha::setI_Num(Mocha::getI_Num() - 1);

	b -= cost;
	cout << "현재 잔액은 " << b << "원 입니다." << endl;

	VendingMachine::setBalance(b);

	o.sendinfo();
}
