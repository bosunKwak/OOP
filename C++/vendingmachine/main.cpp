#include <iostream>
#include "InsertCoin.h"
#include "Item.h"
#include "ManageCenter.h"
#include "Owner.h"
#include "VendingMachine.h"

using namespace std;

//main �Լ�
int main() {

	VendingMachine VM;
	InsertCoin i;

	int b;
	cout << "�ȳ��ϼ���. coffee vending machine�Դϴ�." << endl;
	i.CoinInsert();
	b = i.getBalance();
	VendingMachine::setBalance(b);

	while (true) {
		int n;

		cout << "�ֹ��� ���Ͻø� 1, �ֹ��� ���Ͻ��� ������ 0�� �Է��Ͽ� �ֽʽÿ�." << endl;
		cin >> n;
		if (n == 0) {
			cout << "Vending machine�� �̿����ּż� �����մϴ�." << endl;
			cout << "�ܾ��� �����帮�ڽ��ϴ�." << endl;
			VM.outCoin();
			break;
		}
		else {
			b = VM.getBalance();

			if (b < 440) {
				cout << "�ܾ��� ���� ���� ������ ��ǰ �ݾ׺��� �����ϴ�. �ܾ��� �����帮�ڽ��ϴ�." << endl;
				VM.outCoin();
				break;
			}			
			VM.List();
			
		}
	}
}
	
