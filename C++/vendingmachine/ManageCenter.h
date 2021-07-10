#pragma once

// "ManageCenter" :  vending machine으로부터 메시지를 받고 상품을 보내주는 class
class ManageCenter {
public:

	//이름 : "sendItem"
	//목적/기능 : vending machine으로부터 상품이 부족하다는 메시지를 받고 해당 상품을 보내준다.
	//			어떤 상품을 몇 개 보내주는 지 메시지를 vending machine에게 보내고 그 메시지 내용을 보여준다. 
	//인자 : 없음
	//리턴 : 없음
	void sendItem();
};