#include <iostream>
#include "InsertCoin.h"
#include "Item.h"
#include "ManageCenter.h"
#include "Owner.h"
#include "VendingMachine.h"

using namespace std;

//main 함수
int main() {

	VendingMachine VM;
	InsertCoin i;

	int b;
	cout << "안녕하세요. coffee vending machine입니다." << endl;
	i.CoinInsert();
	b = i.getBalance();
	VendingMachine::setBalance(b);

	while (true) {
		int n;

		cout << "주문을 원하시면 1, 주문을 원하시지 않으면 0을 입력하여 주십시오." << endl;
		cin >> n;
		if (n == 0) {
			cout << "Vending machine을 이용해주셔서 감사합니다." << endl;
			cout << "잔액을 돌려드리겠습니다." << endl;
			VM.outCoin();
			break;
		}
		else {
			b = VM.getBalance();

			if (b < 440) {
				cout << "잔액이 가장 낮은 가격의 상품 금액보다 적습니다. 잔액을 돌려드리겠습니다." << endl;
				VM.outCoin();
				break;
			}			
			VM.List();
			
		}
	}
}
	
