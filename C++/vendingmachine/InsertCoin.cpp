#include <iostream>
#include "InsertCoin.h"
using namespace std;

//InsertCoin 의 멤버함수 정의

void InsertCoin::CoinInsert() {
	cout << "vending machine에 넣을 10원의 개수:  ";
	cin >> this->c10;
	cout << "vending machine에 넣을 50원의 개수:  ";
	cin >> this->c50;
	cout << "vending machine에 넣을 100원의 개수: ";
	cin >> this->c100;
	setBalance();
	cout << "잔액은  "<< getBalance() <<"입니다." <<endl;

}


void InsertCoin::setBalance() {
	balance = (10 * c10) + (50 * c50) + (100 * c100) ;
}


int InsertCoin::getBalance() {
	return balance;
}
