#pragma once
#include "VendingMachine.h"
#include <string.h>

// "Item" : ��� ��ǰ class(�ڽ� Ŭ����)�� �θ� Ŭ����
//			current storage�� Ȯ���ϰ� �ش� ��ǰ�� ������ ���� ���ں��� ������� Managecenter�� �̸� �����Ͽ� �߰� ��ǰ�� �޴´�. 

class Item {
private:
	static int I_Num;	//"I_Num" : int�� ���������� �����ִ� ��ǰ�� ������ I_Num ������ �����Ѵ�. 
	int cost = 0;		//"cost" : int �� ������ ��ǰ�� ������ �����Ѵ�. 
public:

	//�̸� : "setI_Num"
	//����/��� : Item Ŭ������ ���� ���� I_Num�� �����Ѵ�. 
	//���� : int n
	//���� : ����
	static void setI_Num(int n) {
		I_Num = n;
	}

	//�̸� : "getI_Num"
	//����/��� : Item Ŭ������ ���� ���� I_Num�� ���� ��ȯ�Ѵ�.
	//���� : ����
	//���� : I_Num
	static int getI_Num() {
		return I_Num;
	}

	//�̸� : "setCost"
	//����/��� : Item Ŭ������ ���� cost�� �����Ѵ�. 
	//���� : int c
	//���� : ����
	void setCost(int c) {
		cost = c;
	}

	//�̸� : "setCost"
	//����/��� : Item Ŭ������ ���� cost�� ���� ��ȯ�Ѵ�. 
	//���� : ����
	//���� : cost
	int getCost() {
		return cost;
	}

};

// "Americano" : Item Ŭ������ �ڽ� Ŭ����
//				�߰��� �ش� ��ǰ(americano)�� �Ǹ��ϰ� ���� �ܾ�, ���� ��ǰ�� ������ ����Ѵ�.  
class Americano :public Item {
private:
	static int I_Num;	//"I_Num" : int�� ���������� �����ִ� ��ǰ(americano)�� ������ I_Num ������ �����Ѵ�. 
	int cost = 440;		//"cost" : int�� ������ �ش��ǰ(americano)�� ������ �����Ѵ�. 
public:

	//�̸� : "CheckItemNum"
	//����/��� : �ش� ��ǰ(americano)�� ������ üũ���ְ� ������ ��� manage center�� �ΰ� ��ǰ�� ��û�ϰ� �޴´�.
	//���� : ����
	//���� : ����
	void CheckItemNum();

	//�̸� : "CheckStorage"
	//����/��� : �ش� ��ǰ(americano)�� �ݾ��� �˷��ְ�, �ܾװ� ��ǰ ������ ������ش�.
	//			Owner�� current storage ������ �����Ѵ�. 
	//���� : ����
	//���� : ����
	void CheckStorage();

	//�̸� : "setI_Num"
	//����/��� : Americano Ŭ������ �������� I_Num�� ���� ������ �ش�. 
				//�θ�Ŭ������ Item Ŭ������ setI_Num����Լ��� �������̵� �Ѵ�. 
	//���� : int n
	//���� : ����
	static void setI_Num(int n) {
		I_Num = n;
	}

	//�̸� : "getI_Num"
	//����/��� : Americano Ŭ������ �������� I_Num�� ���� ��ȯ�� �ش�. 
				//�θ�Ŭ������ Item Ŭ������ getI_Num����Լ��� �������̵� �Ѵ�. 
	//���� : ����
	//���� : I_Num
	static int getI_Num() {
		return I_Num;
	}
};


// "Latte" : Item Ŭ������ �ڽ� Ŭ����
//				�߰��� �ش� ��ǰ(Latte)�� �Ǹ��ϰ� ���� �ܾ�, ���� ��ǰ�� ������ ����Ѵ�.  
class Latte :public Item {
private:
	static int I_Num;	//"I_Num" : int�� ���������� �����ִ� ��ǰ(Latte)�� ������ I_Num ������ �����Ѵ�. 
	int cost = 510;		//"cost" : int�� ������ �ش��ǰ(Latte)�� ������ �����Ѵ�. 
public:


	//�̸� : "CheckItemNum"
	//����/��� : �ش� ��ǰ(Latte)�� ������ üũ���ְ� ������ ��� manage center�� �ΰ� ��ǰ�� ��û�ϰ� �޴´�.
	//���� : ����
	//���� : ����
	void CheckItemNum();

	//�̸� : "CheckStorage"
	//����/��� : �ش� ��ǰ(Latte)�� �ݾ��� �˷��ְ�, �ܾװ� ��ǰ ������ ������ش�.
	//			Owner�� current storage ������ �����Ѵ�. 
	//���� : ����
	//���� : ����
	void CheckStorage();


	//�̸� : "setI_Num"
	//����/��� : Latte Ŭ������ �������� I_Num�� ���� ������ �ش�. 
				//�θ�Ŭ������ Item Ŭ������ setI_Num����Լ��� �������̵� �Ѵ�. 
	//���� : int n
	//���� : ����
	static void setI_Num(int n) {
		I_Num = n;
	}

	//�̸� : "getI_Num"
	//����/��� : Latte Ŭ������ �������� I_Num�� ���� ��ȯ�� �ش�. 
			// �θ�Ŭ������ Item Ŭ������ getI_Num����Լ��� �������̵� �Ѵ�. 
	//���� : ����
	//���� : I_Num
	static int getI_Num() {
		return I_Num;
	}
};


// "Mocha" : Item Ŭ������ �ڽ� Ŭ����
//				�߰��� �ش� ��ǰ(Mocha)�� �Ǹ��ϰ� ���� �ܾ�, ���� ��ǰ�� ������ ����Ѵ�.  
class Mocha :public Item {
private:
	static int I_Num;	//"I_Num" : int�� ���������� �����ִ� ��ǰ(Mocha)�� ������ I_Num ������ �����Ѵ�. 
	int cost = 620;		//"cost" : int�� ������ �ش��ǰ(Mocha)�� ������ �����Ѵ�. 
public:


	//�̸� : "CheckItemNum"
	//����/��� : �ش� ��ǰ(Mocha)�� ������ üũ���ְ� ������ ��� manage center�� �ΰ� ��ǰ�� ��û�ϰ� �޴´�.
	//���� : ����
	//���� : ����
	void CheckItemNum();


	//�̸� : "CheckStorage"
	//����/��� : �ش� ��ǰ(Mocha)�� �ݾ��� �˷��ְ�, �ܾװ� ��ǰ ������ ������ش�.
	//			Owner�� current storage ������ �����Ѵ�. 
	//���� : ����
	//���� : ����
	void CheckStorage();

	//�̸� : "setI_Num"
	//����/��� : Mocha Ŭ������ �������� I_Num�� ���� ������ �ش�. 
				//�θ�Ŭ������ Item Ŭ������ setI_Num����Լ��� �������̵� �Ѵ�. 
	//���� : int n
	//���� : ����
	static void setI_Num(int n) {
		I_Num = n;
	}

	//�̸� : "getI_Num"
	//����/��� : Mocha Ŭ������ �������� I_Num�� ���� ��ȯ�� �ش�. 
			//�θ�Ŭ������ Item Ŭ������ getI_Num����Լ��� �������̵� �Ѵ�. 
	//���� : ����
	//���� : I_Num
	static int getI_Num() {
		return I_Num;
	}
};

