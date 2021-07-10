#pragma once

//"Owner" : vending machine으로부터 current storage 정보를 받는 class
class Owner {
public:

	//이름 : "sendinfo"
	//목적/기능 : vending machine으로부터 받은 메시지 내용을 보여준다. 
	//			메시지의 내용은 vending machine에 있는 current storage의 정보이다. 메시지는 상품을 판매할 때마다 전송한다. 
	//인자 : 없음
	//리턴 : 없음
	void sendinfo();
};