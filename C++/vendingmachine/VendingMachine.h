#pragma once
#include "InsertCoin.h"
#include "Item.h"

//"VendingMachine" : vending machine�� �ֿ� ����� ����ִ� class
class VendingMachine {
private:
	static int balance;		//"balance" : int�� ����������, �ܾ��� �����Ѵ�. 
	
public:
	int num;	// "num" : int �� ������ ����ڰ� �Է��� ��ǰ�� ��ȣ�� �����Ѵ�. 


	//�̸� : "setBalance"
	//����/��� : VendingMachine Ŭ������ �������� balance�� ���� �����Ѵ�. 
	//���� : int b
	//���� : ����
	static void setBalance(int b) {
		balance = b;
	}


	//�̸� : "getBalance"
	//����/��� : VendingMachine Ŭ������ �������� balance�� ���� ��ȯ�Ѵ�. 
	//���� : ����
	//���� : ����
	static int getBalance() {
		return balance;
	}

	//�̸�: "List"
	//����/��� : ��ǰ�� ����Ʈ�� ����ϰ� ����ڷκ��� ��ǰ�� ��ȣ�� �Է¹ް�, �ش� ��ǰ�� short introduction�� ����Ѵ�. 
	//���� : ����
	//���� : ����
	void List();	

	//�̸� : "outCoin"
	//����/��� : �ܾ��� 10��, 50��, 100�� ������ �Ž����ش�.
	//���� : ����
	//���� : ����
	void outCoin();

};