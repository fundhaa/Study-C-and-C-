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
	try{ // 실패 가능성이 있는 함수는 try 블럭 안에 적어준다.
		connect_server(99);
		// --- 성공했을때만 할 수 있는 코드 작성-----
		std::cout << "connect server 성공" << std::endl;
		// ------------------------------------------
	}
	catch (int n) {
		// 위의 try가 실패하면 여기로 넘어옴.
		std::cout << "예외 발생" << std::endl;
		// 1. 오류를 수정할 수 없다면, 사용자에게 알려주고, 프로그램 종료(exit())
		// 2. 오류 수정이 가능하다면, 수정.. 프로그램은 계속 실행 가능.
	}
	std::cout << "프로그램 계속 실행" << std::endl;
}