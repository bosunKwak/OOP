#pragma once
// "InsertCoin" : coin�� �Է¹ް� �� coin ���� ����Ͽ��ִ� class
class InsertCoin {
private:
	int c10 = 0;  //"c10" : int�� ������ 10���� ������ �����Ѵ�.
	int c50 = 0;  //"c50" : int�� ������ 50���� ������ �����Ѵ�.
	int c100 = 0; //"c100" : int�� ������ 100���� ������ �����Ѵ�.

	int balance = 0;	//"balance" : �Է¹��� coin�� ���� �����Ѵ�. 

public:


	//�̸� : "setC10"
	//����/��� : InsertCoin Ŭ������ c10������ �����Ѵ�. 
	//���� : int n
	//���� : ����
	void setC10(int n) {
		c10 = n;
	}

	//�̸� : "getC10"
	//����/��� : InsertCoin Ŭ������ c10������ ���� ��ȯ�Ѵ�.
	//���� : ����
	//���� : c10
	int getC10() {
		return c10;
	}

	//�̸� : "setC50"
	//����/��� : InsertCoin Ŭ������ c50������ �����Ѵ�. 
	//���� : int n
	//���� : ����
	void setC50(int n) {
		c50 = n;
	}

	//�̸� : "getC50"
	//����/��� : InsertCoin Ŭ������ c50������ ���� ��ȯ�Ѵ�.
	//���� : ����
	//���� : c10
	int getC50() {
		return c50;
	}

	//�̸� : "setC100"
	//����/��� : InsertCoin Ŭ������ c100������ �����Ѵ�. 
	//���� : int n
	//���� : ����
	void setC100(int n) {
		c100 = n;
	}
	
	//�̸� : "getC100"
	//����/��� : InsertCoin Ŭ������ c100������ ���� ��ȯ�Ѵ�.
	//���� : ����
	//���� : c100
	int getC100() {
		return c100;
	}

	//�̸� : "setBalance"
	//����/��� : �Է¹��� 10��, 50��, 100���� ������ ����Ѵ�. 
	//���� : ����
	//���� : ����
	void setBalance();

	//�̸� : "getBalance"
	//����/��� : InsertCoin Ŭ������ balance ���� ��ȯ�Ѵ�. 
	//���� : ����
	//���� : balance
	int getBalance();

	//�̸� : "CoinInsert"
	//����/��� : ����ڷκ��� coin�� �Է¹޴´�. 
	//���� : ����
	//���� : ����
	void CoinInsert();
};
