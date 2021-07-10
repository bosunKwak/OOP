#pragma once
#include "InsertCoin.h"
#include "Item.h"

//"VendingMachine" : vending machine의 주요 기능을 담고있는 class
class VendingMachine {
private:
	static int balance;		//"balance" : int형 정적변수로, 잔액을 저장한다. 
	
public:
	int num;	// "num" : int 형 변수로 사용자가 입력할 상품의 번호를 저장한다. 


	//이름 : "setBalance"
	//목적/기능 : VendingMachine 클래스의 정적변수 balance의 값을 변경한다. 
	//인자 : int b
	//리턴 : 없음
	static void setBalance(int b) {
		balance = b;
	}


	//이름 : "getBalance"
	//목적/기능 : VendingMachine 클래스의 정적변수 balance의 값을 반환한다. 
	//인자 : 없음
	//리턴 : 없음
	static int getBalance() {
		return balance;
	}

	//이름: "List"
	//목적/기능 : 상품의 리스트를 출력하고 사용자로부터 상품의 번호를 입력받고, 해당 상품의 short introduction을 출력한다. 
	//인자 : 없음
	//리턴 : 없음
	void List();	

	//이름 : "outCoin"
	//목적/기능 : 잔액을 10원, 50원, 100원 단위로 거슬러준다.
	//인자 : 없음
	//리턴 : 없음
	void outCoin();

};