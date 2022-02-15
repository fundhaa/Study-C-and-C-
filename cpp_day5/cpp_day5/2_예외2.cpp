#include <iostream>
// 2_예외1 - 231page

// 객체지향 언어들 : 반환값과 실패의 전달(예외)를 분리하자.

// 핵심 1. 함수가 실패하면 throw 키워드로 예외를 던진다.
//      2. 함수가 예외를 던질 때 catch 하지 않으면 프로그램은 비정상 종료


int connect_server(int id) {
	if (1) // 실패라고 가정 
		throw 1; // 실패했음을 호출자에게 전달
	return 100;

}

int main(() {
	connect_server(99);
	// 서버 접속 후 작업들...
	std::cout << "프로그램 계속 실행" << std::endl;
}