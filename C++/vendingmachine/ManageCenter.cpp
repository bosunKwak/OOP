#include <iostream>
#include "ManageCenter.h"
#include "Item.h"
using namespace std;

//ManageCenter의 멤버함수 정의
void ManageCenter::sendItem() {
	cout << "<================Manage Center=================>" << endl;
	cout << "|    <메시지 내용>                             |" << endl;
	cout << "|  To manage center                            |" << endl;
	cout << "|         item이 필요합니다.                   |" << endl;
	cout << "|                        From Vending machine  |" << endl;
	cout << "|==============================================|" << endl;
	cout << "|       vending machine에게 item을 보냄        |" << endl;
	cout << "|==============================================|" << endl;
}