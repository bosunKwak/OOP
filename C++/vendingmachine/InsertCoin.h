#pragma once
// "InsertCoin" : coin을 입력받고 총 coin 값을 계산하여주는 class
class InsertCoin {
private:
	int c10 = 0;  //"c10" : int형 변수로 10원의 개수를 저장한다.
	int c50 = 0;  //"c50" : int형 변수로 50원의 개수를 저장한다.
	int c100 = 0; //"c100" : int형 변수로 100원의 개수를 저장한다.

	int balance = 0;	//"balance" : 입력받은 coin의 값을 저장한다. 

public:


	//이름 : "setC10"
	//목적/기능 : InsertCoin 클래스의 c10변수를 변경한다. 
	//인자 : int n
	//리턴 : 없음
	void setC10(int n) {
		c10 = n;
	}

	//이름 : "getC10"
	//목적/기능 : InsertCoin 클래스의 c10변수의 값을 반환한다.
	//인자 : 없음
	//리턴 : c10
	int getC10() {
		return c10;
	}

	//이름 : "setC50"
	//목적/기능 : InsertCoin 클래스의 c50변수를 변경한다. 
	//인자 : int n
	//리턴 : 없음
	void setC50(int n) {
		c50 = n;
	}

	//이름 : "getC50"
	//목적/기능 : InsertCoin 클래스의 c50변수의 값을 반환한다.
	//인자 : 없음
	//리턴 : c10
	int getC50() {
		return c50;
	}

	//이름 : "setC100"
	//목적/기능 : InsertCoin 클래스의 c100변수를 변경한다. 
	//인자 : int n
	//리턴 : 없음
	void setC100(int n) {
		c100 = n;
	}
	
	//이름 : "getC100"
	//목적/기능 : InsertCoin 클래스의 c100변수의 값을 반환한다.
	//인자 : 없음
	//리턴 : c100
	int getC100() {
		return c100;
	}

	//이름 : "setBalance"
	//목적/기능 : 입력받은 10원, 50원, 100원의 총합을 계산한다. 
	//인자 : 없음
	//리턴 : 없음
	void setBalance();

	//이름 : "getBalance"
	//목적/기능 : InsertCoin 클래스의 balance 값을 반환한다. 
	//인자 : 없음
	//리턴 : balance
	int getBalance();

	//이름 : "CoinInsert"
	//목적/기능 : 사용자로부터 coin을 입력받는다. 
	//인자 : 없음
	//리턴 : 없음
	void CoinInsert();
};
