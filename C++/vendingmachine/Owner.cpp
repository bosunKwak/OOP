#include <iostream>
#include "Owner.h"
#include "Item.h"
using namespace std;

//Owner의 멤버함수 정의
void Owner::sendinfo() {
	cout << "<=======================Owner=======================>" << endl;
	cout << "|   vending machine의 current storage 정보를 받음   |" << endl;
	cout << "|   <메시지 내용>                                   |" << endl;
	cout << "|     Americano: " << Americano::getI_Num() << "개 있습니다.                      |" << endl;
	cout << "|     Latte: " << Latte::getI_Num() << "개 있습니다.                         | " << endl;
	cout << "|     Mocha: " << Mocha::getI_Num() << "개 있습니다.                         | " << endl;
	cout << "<===================================================>" << endl;
}