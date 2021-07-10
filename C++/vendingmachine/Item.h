#pragma once
#include "VendingMachine.h"
#include <string.h>

// "Item" : 모든 상품 class(자식 클래스)의 부모 클래스
//			current storage를 확인하고 해당 상품의 개수가 일정 숫자보다 적은경우 Managecenter에 이를 전송하여 추가 상품을 받는다. 

class Item {
private:
	static int I_Num;	//"I_Num" : int형 정적변수로 남아있는 상품의 개수를 I_Num 변수에 저장한다. 
	int cost = 0;		//"cost" : int 형 변수로 상품의 가격을 저장한다. 
public:

	//이름 : "setI_Num"
	//목적/기능 : Item 클래스의 정적 변수 I_Num를 변경한다. 
	//인자 : int n
	//리턴 : 없음
	static void setI_Num(int n) {
		I_Num = n;
	}

	//이름 : "getI_Num"
	//목적/기능 : Item 클래스의 정적 변수 I_Num의 값을 반환한다.
	//인자 : 없음
	//리턴 : I_Num
	static int getI_Num() {
		return I_Num;
	}

	//이름 : "setCost"
	//목적/기능 : Item 클래스의 변수 cost를 변경한다. 
	//인자 : int c
	//리턴 : 없음
	void setCost(int c) {
		cost = c;
	}

	//이름 : "setCost"
	//목적/기능 : Item 클래스의 변수 cost의 값을 반환한다. 
	//인자 : 없음
	//리턴 : cost
	int getCost() {
		return cost;
	}

};

// "Americano" : Item 클래스의 자식 클래스
//				추가로 해당 상품(americano)를 판매하고 남은 잔액, 남은 상품의 개수를 계산한다.  
class Americano :public Item {
private:
	static int I_Num;	//"I_Num" : int형 정적변수로 남아있는 상품(americano)의 개수를 I_Num 변수에 저장한다. 
	int cost = 440;		//"cost" : int형 변수로 해당상품(americano)의 가격을 저장한다. 
public:

	//이름 : "CheckItemNum"
	//목적/기능 : 해당 상품(americano)의 개수를 체크해주고 부족한 경우 manage center에 부가 상품을 요청하고 받는다.
	//인자 : 없음
	//리턴 : 없음
	void CheckItemNum();

	//이름 : "CheckStorage"
	//목적/기능 : 해당 상품(americano)의 금액을 알려주고, 잔액과 상품 개수를 계산해준다.
	//			Owner에 current storage 정보를 전달한다. 
	//인자 : 없음
	//리턴 : 없음
	void CheckStorage();

	//이름 : "setI_Num"
	//목적/기능 : Americano 클래스의 정적변수 I_Num의 값을 변경해 준다. 
				//부모클래스인 Item 클래스의 setI_Num멤버함수를 오버라이딩 한다. 
	//인자 : int n
	//리턴 : 없음
	static void setI_Num(int n) {
		I_Num = n;
	}

	//이름 : "getI_Num"
	//목적/기능 : Americano 클래스의 정적변수 I_Num의 값을 반환해 준다. 
				//부모클래스인 Item 클래스의 getI_Num멤버함수를 오버라이딩 한다. 
	//인자 : 없음
	//리턴 : I_Num
	static int getI_Num() {
		return I_Num;
	}
};


// "Latte" : Item 클래스의 자식 클래스
//				추가로 해당 상품(Latte)를 판매하고 남은 잔액, 남은 상품의 개수를 계산한다.  
class Latte :public Item {
private:
	static int I_Num;	//"I_Num" : int형 정적변수로 남아있는 상품(Latte)의 개수를 I_Num 변수에 저장한다. 
	int cost = 510;		//"cost" : int형 변수로 해당상품(Latte)의 가격을 저장한다. 
public:


	//이름 : "CheckItemNum"
	//목적/기능 : 해당 상품(Latte)의 개수를 체크해주고 부족한 경우 manage center에 부가 상품을 요청하고 받는다.
	//인자 : 없음
	//리턴 : 없음
	void CheckItemNum();

	//이름 : "CheckStorage"
	//목적/기능 : 해당 상품(Latte)의 금액을 알려주고, 잔액과 상품 개수를 계산해준다.
	//			Owner에 current storage 정보를 전달한다. 
	//인자 : 없음
	//리턴 : 없음
	void CheckStorage();


	//이름 : "setI_Num"
	//목적/기능 : Latte 클래스의 정적변수 I_Num의 값을 변경해 준다. 
				//부모클래스인 Item 클래스의 setI_Num멤버함수를 오버라이딩 한다. 
	//인자 : int n
	//리턴 : 없음
	static void setI_Num(int n) {
		I_Num = n;
	}

	//이름 : "getI_Num"
	//목적/기능 : Latte 클래스의 정적변수 I_Num의 값을 반환해 준다. 
			// 부모클래스인 Item 클래스의 getI_Num멤버함수를 오버라이딩 한다. 
	//인자 : 없음
	//리턴 : I_Num
	static int getI_Num() {
		return I_Num;
	}
};


// "Mocha" : Item 클래스의 자식 클래스
//				추가로 해당 상품(Mocha)를 판매하고 남은 잔액, 남은 상품의 개수를 계산한다.  
class Mocha :public Item {
private:
	static int I_Num;	//"I_Num" : int형 정적변수로 남아있는 상품(Mocha)의 개수를 I_Num 변수에 저장한다. 
	int cost = 620;		//"cost" : int형 변수로 해당상품(Mocha)의 가격을 저장한다. 
public:


	//이름 : "CheckItemNum"
	//목적/기능 : 해당 상품(Mocha)의 개수를 체크해주고 부족한 경우 manage center에 부가 상품을 요청하고 받는다.
	//인자 : 없음
	//리턴 : 없음
	void CheckItemNum();


	//이름 : "CheckStorage"
	//목적/기능 : 해당 상품(Mocha)의 금액을 알려주고, 잔액과 상품 개수를 계산해준다.
	//			Owner에 current storage 정보를 전달한다. 
	//인자 : 없음
	//리턴 : 없음
	void CheckStorage();

	//이름 : "setI_Num"
	//목적/기능 : Mocha 클래스의 정적변수 I_Num의 값을 변경해 준다. 
				//부모클래스인 Item 클래스의 setI_Num멤버함수를 오버라이딩 한다. 
	//인자 : int n
	//리턴 : 없음
	static void setI_Num(int n) {
		I_Num = n;
	}

	//이름 : "getI_Num"
	//목적/기능 : Mocha 클래스의 정적변수 I_Num의 값을 반환해 준다. 
			//부모클래스인 Item 클래스의 getI_Num멤버함수를 오버라이딩 한다. 
	//인자 : 없음
	//리턴 : I_Num
	static int getI_Num() {
		return I_Num;
	}
};

