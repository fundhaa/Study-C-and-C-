#include <iostream>

// C++		: throw , try, catch
// python	: raise, try, except

// 실패에 대한 클래스 만들기.
class MemoryException {
	int errorcode;
	std::string description;
public:
	MemoryException(int err, const std::string& s) : errorcode(err), description(s)
	{
	}
};

// 아래처럼 EmptyClass로 해도 나쁘지 않다.
// 클래스 이름 자체가 설명이 된다.
class InvalidURL {};
class FailPassword {};

int connect_server(int id) {
	// 하나의 함수는 다양한 이유로 실패할 수 있다.
	if (1) {
		MemoryException m(1005, "access violation");
		throw m;
	}
	if (2) {
		InvalidURL e;
		throw e;
	}
	if (3) {
		FailPassword e; // 실패 원인에 해당하는 예외 객체를 생성해서 던진다.
		throw e;
	}
	return 100;
}

int main(() {
	try {
		connect_server(99);
		std::cout << "connect server 성공" << std::endl;
	}
	catch (MemoryException& e) { // 함수 인자를 받는 것처럼 보통 참조로 받는다.
		std::cout << "예외 발생 : " << std::endl;
	}
	catch (InvalidURL& e) {
		std::cout << "예외 발생 : 잘못된 URL" << std::endl;
	}
	catch (...) { // 위에서 잡히지 않는 모든 예외를 잡아달라
		std::cout << "알 수 없는 예외 발생" << std::endl;
	}
	std::cout << "프로그램 계속 실행" << std::endl;
}
// 그런데, 예외를 사용하면 오버헤드가 좀 크다.(예외 관련해서 생성되는 기계어 코드가 꽤 많다)
// 그래서 C++에서는
// 간단한 오류 : 예외가 아닌 "전통적인 반환값을 사용한 방식" 으로 전달
// 심각한 오류만 예외를 사용하는 경우가 많다.