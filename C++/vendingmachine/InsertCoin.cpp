#include <iostream>
#include "InsertCoin.h"
using namespace std;

//InsertCoin �� ����Լ� ����

void InsertCoin::CoinInsert() {
	cout << "vending machine�� ���� 10���� ����:  ";
	cin >> this->c10;
	cout << "vending machine�� ���� 50���� ����:  ";
	cin >> this->c50;
	cout << "vending machine�� ���� 100���� ����: ";
	cin >> this->c100;
	setBalance();
	cout << "�ܾ���  "<< getBalance() <<"�Դϴ�." <<endl;

}


void InsertCoin::setBalance() {
	balance = (10 * c10) + (50 * c50) + (100 * c100) ;
}


int InsertCoin::getBalance() {
	return balance;
}
