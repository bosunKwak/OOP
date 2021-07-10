#include <iostream>
#include "VendingMachine.h"
using namespace std;

int VendingMachine::balance = 0;

//VendingMachine의 멤버함수 정의
void VendingMachine::List() {

	InsertCoin i;
	Americano a;
	Latte l;
	Mocha m;
	
	cout << "<================menu================>" << endl;
	cout << "|          1. Americano              |" << endl;
	cout << "|          2. Latte                  |" << endl;
	cout << "|          3. Mocha                  |" << endl;
	cout << "<====================================>" << endl;
	cout << " 원하시는 상품의 번호를 입력하세요." << endl;


	cin >> num; 
	if (num == 1) {
		cout << "선택하신 Americano의 가격은 440원입니다. " << endl;
		a.CheckStorage();
		a.CheckItemNum();
	}
	else if (num == 2) {
		cout << "선택하신 Latte의 가격은 510원입니다. " << endl;
		l.CheckStorage();
		l.CheckItemNum();
	}
	else if (num == 3) {
		cout << "선택하신 Mocha의 가격은 670원입니다. " << endl;
		m.CheckStorage();
		m.CheckItemNum();
	}

}

void VendingMachine::outCoin() {
	int balance = VendingMachine::getBalance();
	cout << "총 금액 : " << balance << endl;
	cout << "나오는 100원의 개수 : " << balance / 100 << endl;
	cout << "나오는 50원의 개수 : " << balance % 100 / 50 << endl;
	cout << "나오는 10원의 개수 : " << balance % 100 % 50 / 10 << endl;

	//잔액을 모두 되돌려 주었으므로 balance의 값은 0이 된다. 
	VendingMachine::setBalance(0);
}